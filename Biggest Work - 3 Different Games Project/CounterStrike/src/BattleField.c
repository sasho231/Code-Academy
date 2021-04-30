#include "BattleField.h"

#include <stdio.h>

void createPlayers(BattleField *bf)
{
    int playerHealth = 0;
    int playerArmor = 0;

    for (int i = 0; i < PLAYERS_COUNT; ++i)
    {
        scanf("%d %d", &playerHealth, &playerArmor);
        bf->players[i].playerId = i;
        bf->players[i].playerData.health = playerHealth;
        bf->players[i].playerData.armor = playerArmor;
    }
}

void buyPistols(BattleField *bf)
{
    int pistolId = 0;
    int pistolDamagePerRound = 0;
    int pistolClipSize = 0;
    int pistolRemainingAmmo = 0;

    for (int i = 0; i < PLAYERS_COUNT; ++i)
    {
        scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
              &pistolRemainingAmmo);
        bf->players[i].pistol.pistolType = pistolId;
        if (pistolId == GLOCK)
        {
            bf->players[i].pistol.healthDamage = &glockHealthDamage;
            bf->players[i].pistol.fire = &fireGlock;
        }
        else
        {
            bf->players[i].pistol.healthDamage = &eagleHealthDamage;
            bf->players[i].pistol.fire = &fireEagle;
        }
        bf->players[i].pistol.damagePerRound = pistolDamagePerRound;
        bf->players[i].pistol.clipSize = pistolClipSize;
        bf->players[i].pistol.remainingAmmo = pistolRemainingAmmo;
        bf->players[i].pistol.currClipBullets = pistolClipSize;
    }
}

void startBattle(BattleField *bf)
{
    while (true)
    {
        if (doAttack(&bf->players[0], &bf->players[1]))
            return;
        if (doAttack(&bf->players[1], &bf->players[0]))
            return;
    }
}
