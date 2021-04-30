#include <stdio.h>
#include "Player.h"

bool doAttack(Player *attacker, Player *attacked)
{
    printf("\nPlayerID %d turn:\n", attacker->playerId);
    if (true == attacker->pistol.fire(attacker, attacked))
    {
        printf("\nPlayer with ID: %d wins!\n", attacker->playerId);
        return (true);
    }
    return (false);
}