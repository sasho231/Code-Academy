#include "DeathKnightHero.h"

static Hero heroDeathKnight;

static void basicSpell(Hero *hero, int manaCost)
{
    if (manaCost <= hero->currMana)
    {
        hero->currMana -= manaCost;
        printActionSuccess(hero, BASIC, manaCost);
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
        hero->basicSpell(hero, 0);
    }
    else
    {
        printActionFailed(hero, ULTIMATE);
    }
}

Hero *createDeathKnight(char *name, int maxMana, int manaRegenRate)
{
    heroDeathKnight.spells[BASIC].manaCost = DEATH_KNIGHT_BASIC_SPELL_MANA_COST;
    strncpy(heroDeathKnight.spells[BASIC].name, DEATH_KNIGHT_BASIC_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    heroDeathKnight.spells[ULTIMATE].manaCost = DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST;
    strncpy(heroDeathKnight.spells[ULTIMATE].name, DEATH_KNIGHT_ULTIMATE_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    strncpy(heroDeathKnight.name, name, MAX_HERO_NAME_SIZE);
    heroDeathKnight.maxMana = maxMana;
    heroDeathKnight.currMana = maxMana;
    heroDeathKnight.manaRegenRate = manaRegenRate;
    heroDeathKnight.basicSpell = &basicSpell;
    heroDeathKnight.ultimateSpell = &ultimateSpell;
    return (&heroDeathKnight);
}
