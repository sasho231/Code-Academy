#ifndef HERO_H_
#define HERO_H_

#include "Defines.h"
#include <string.h>
#include <stdbool.h>

#define MAX_SPELL_NAME_SIZE 20
#define MAX_HERO_NAME_SIZE 20
#define MAX_SPELLS 2

typedef struct
{
    char name[MAX_SPELL_NAME_SIZE];
    int manaCost;
} Spell;

typedef struct Hero Hero;

typedef void (*runSpell)(Hero *hero, int manaCost);

typedef struct Hero
{
    Spell spells[MAX_SPELLS];
    char name[MAX_HERO_NAME_SIZE];
    int maxMana;
    int currMana;
    int manaRegenRate;
    runSpell basicSpell;
    runSpell ultimateSpell;
} Hero;

void printActionSuccess(Hero *hero, SpellType spell, int manaCost);
void printActionFailed(Hero *hero, SpellType spell);
void regenerateMana(Hero *hero);
void doAction(Hero *hero, ActionType action);

#endif /* HERO_H_ */
