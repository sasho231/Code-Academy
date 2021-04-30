#include <stdio.h>
#include <stdlib.h>

#include "Hero.h"
#include "ArchmageHero.h"
#include "DeathKnightHero.h"
#include "DrawRangerHero.h"

#define MAX_HEROES 3
Hero *heroes[MAX_HEROES];

void runActions(int *actions, int actionCount)
{
    for (int i = 0; i < actionCount; i++)
    {
        for (int j = 0; j < MAX_HEROES; j++)
        {
            doAction(heroes[j], actions[i]);
        }
    }
}

int main()
{
    char name[MAX_HERO_NAME_SIZE + 1];
    int maxMana = 0;
    int baseManaRegenRate = 0;
    int manaRegenModifier = 0;

    scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
    heroes[0] = createArchmage(name, maxMana, baseManaRegenRate * manaRegenModifier);
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    heroes[1] = createDeathKnight(name, maxMana, baseManaRegenRate);
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    heroes[2] = createDrawRanger(name, maxMana, baseManaRegenRate);
    int actionCount = 0;
    scanf("%d", &actionCount);
    int *actions = malloc(actionCount * (sizeof(int)));

    for (int i = 0; i < actionCount; ++i)
    {
        scanf("%d", actions + i);
    }
    runActions(actions, actionCount);
    free(actions);
    return EXIT_SUCCESS;
}
