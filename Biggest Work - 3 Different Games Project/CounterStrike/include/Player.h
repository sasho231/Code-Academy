#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>

#include "Pistol.h"
#include "Defines.h"

typedef struct Player
{
    PlayerVitalData playerData;
    Pistol pistol;
    int playerId;
} Player;

bool doAttack(Player *attacker, Player *attacked);

#endif /* PLAYER_H_ */
