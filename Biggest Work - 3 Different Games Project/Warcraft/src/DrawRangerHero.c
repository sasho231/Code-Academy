#include "DrawRangerHero.h"

static Hero heroDrawRanger;

static void basicSpell(Hero *hero, int manaCost)
{
    if (manaCost <= hero->currMana)
    {
        hero->currMana -= manaCost;
        printActionSuccess(hero, BASIC, manaCost);
        if (manaCost > 0)
        {
            hero->basicSpell(hero, 0);
        }
    }
    else
    {
        printActionFailed(hero, BASIC);
    }
}

static void ultimateSpell(Hero *hero, int manaCost)
{
    if (manaCost <= hero->currMana)
    {
        hero->currMana -= manaCost;
        printActionSuccess(hero, ULTIMATE, manaCost);
    }
    else
    {
        printActionFailed(hero, ULTIMATE);
    }
}

Hero *createDrawRanger(char *name, int maxMana, int manaRegenRate)
{
    heroDrawRanger.spells[BASIC].manaCost = DRAW_RANGER_BASIC_SPELL_MANA_COST;
    strncpy(heroDrawRanger.spells[BASIC].name, DRAW_RANGER_BASIC_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    heroDrawRanger.spells[ULTIMATE].manaCost = DRAW_RANGER_ULTIMATE_SPELL_MANA_COST;
    strncpy(heroDrawRanger.spells[ULTIMATE].name, DRAW_RANGER_ULTIMATE_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    strncpy(heroDrawRanger.name, name, MAX_HERO_NAME_SIZE);
    heroDrawRanger.maxMana = maxMana;
    heroDrawRanger.currMana = maxMana;
    heroDrawRanger.manaRegenRate = manaRegenRate;
    heroDrawRanger.basicSpell = &basicSpell;
    heroDrawRanger.ultimateSpell = &ultimateSpell;
    return (&heroDrawRanger);
}
