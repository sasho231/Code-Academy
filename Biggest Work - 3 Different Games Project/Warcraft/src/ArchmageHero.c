#include "ArchmageHero.h"

static Hero heroArchmage;

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
        regenerateMana(hero);
    }
    else
    {
        printActionFailed(hero, ULTIMATE);
    }
}

Hero *createArchmage(char *name, int maxMana, int manaRegenRate)
{
    heroArchmage.spells[BASIC].manaCost = ARCHMAGE_BASIC_SPELL_MANA_COST;
    strncpy(heroArchmage.spells[BASIC].name, ARCHMAGE_BASIC_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    heroArchmage.spells[ULTIMATE].manaCost = ARCHMAGE_ULTIMATE_SPELL_MANA_COST;
    strncpy(heroArchmage.spells[ULTIMATE].name, ARCHMAGE_ULTIMATE_SPELL_NAME, MAX_SPELL_NAME_SIZE);
    strncpy(heroArchmage.name, name, MAX_HERO_NAME_SIZE);
    heroArchmage.maxMana = maxMana;
    heroArchmage.currMana = maxMana;
    heroArchmage.manaRegenRate = manaRegenRate;
    heroArchmage.basicSpell = &basicSpell;
    heroArchmage.ultimateSpell = &ultimateSpell;
    return (&heroArchmage);
}
