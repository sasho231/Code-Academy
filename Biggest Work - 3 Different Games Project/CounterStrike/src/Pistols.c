#include <stdio.h>
#include "Pistol.h"
#include "Player.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void reloadPistol(Player *player)
{
    int reloadAmount = MIN(player->pistol.clipSize, player->pistol.remainingAmmo);

    if (reloadAmount > 0)
    {
        printf("Reloading...\n");
        player->pistol.remainingAmmo -= reloadAmount;
        player->pistol.currClipBullets += reloadAmount;
        printf("currClipBullets: %d, remainingAmmo: %d\n", player->pistol.currClipBullets, player->pistol.remainingAmmo);
    }
    else
    {
        printf("No ammo left\n");
    }
}

int glockHealthDamage(Player *shooter, int *armor)
{
    int armorDamage = shooter->pistol.damagePerRound >> 1;
    int damage = MIN(*armor, armorDamage);
    if (damage > 0)
    {
        *armor -= damage;
        return ((shooter->pistol.damagePerRound >> 1) + armorDamage - damage);
    }
    return (shooter->pistol.damagePerRound);
}

int eagleHealthDamage(Player *shooter, int *armor)
{
    int armorDamage = shooter->pistol.damagePerRound >> 2;
    int damage = MIN(*armor, armorDamage);
    if (damage > 0)
    {
        *armor -= damage;
        return (((shooter->pistol.damagePerRound * 3) >> 2) + armorDamage - damage);
    }
    return (shooter->pistol.damagePerRound);
}

static bool fireOnce(Player *attacker, Player *attacked)
{
    attacked->playerData.health -= attacker->pistol.healthDamage(attacker, &attacked->playerData.armor);
    attacker->pistol.currClipBullets--;
    printf("Enemy left with: %d health and %d armor\n", attacked->playerData.health, attacked->playerData.armor);
    if (attacked->playerData.health <= 0)
    {
        return (true);
    }
    return (false);
}

bool fireGlock(Player *attacker, Player *attacked)
{
    for (int i = 0; i < ROUNDS_PER_FIRE; i++)
    {
        if (attacker->pistol.currClipBullets > 0)
        {
            if (fireOnce(attacker, attacked))
                return (true);
        }
        else
        {
            reloadPistol(attacker);
            break;
        }
    }
    return (false);
}

bool fireEagle(Player *attacker, Player *attacked)
{
    if (attacker->pistol.currClipBullets > 0)
    {
        return (fireOnce(attacker, attacked));
    }
    reloadPistol(attacker);
    return (false);
}
