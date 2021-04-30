#include <string.h>
#include <stdio.h>
#include "Hero.h"

void printActionSuccess(Hero *hero, SpellType spell, int manaCost)
{
    printf("%s casted %s for %d mana\n", hero->name, hero->spells[spell].name, manaCost);
}

void printActionFailed(Hero *hero, SpellType spell)
{
    printf("%s - not enough mana to cast %s\n", hero->name, hero->spells[spell].name);
}

void regenerateMana(Hero *hero)
{
    if ((hero->currMana + hero->manaRegenRate) > hero->maxMana)
    {
        hero->currMana = hero->maxMana;
    }
    else
    {
        hero->currMana += hero->manaRegenRate;
    }
}

void doAction(Hero *hero, ActionType action)
{
    switch (action)
    {
    case CAST_BASIC_SPELL:
        hero->basicSpell(hero, hero->spells[BASIC].manaCost);
        break;
    case CAST_ULTIMATE_SPELL:
        hero->ultimateSpell(hero, hero->spells[ULTIMATE].manaCost);
        break;
    case REGENERATE_MANA:
        regenerateMana(hero);
        break;
    }
}