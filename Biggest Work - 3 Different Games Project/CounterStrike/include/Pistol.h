#ifndef PISTOL_H_
#define PISTOL_H_

#include "Defines.h"
#include <stdbool.h>

typedef struct Player Player;
typedef int (*tHealthDamage)(Player *attacker, int *armor);
typedef bool (*tFire)(Player *attacker, Player *attacked);

typedef struct
{
    enum PistolType pistolType;
    int damagePerRound;
    int clipSize;
    int currClipBullets;
    int remainingAmmo;
    tHealthDamage healthDamage;
    tFire fire;
} Pistol;

int glockHealthDamage(Player *attacker, int *armor);
int eagleHealthDamage(Player *attacker, int *armor);
bool fireGlock(Player *attacker, Player *attacked);
bool fireEagle(Player *attacker, Player *attacked);

#endif /* PISTOL_H_ */
