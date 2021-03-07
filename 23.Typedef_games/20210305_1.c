/* Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки.  */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dulgi_daski;
    int kusi_daski;
    int malki_skobi;
    int golemi_skobi;
    int vint;
} construction;
void fill_arr(construction *needed_materials, construction *sklad);
int check(construction *needed_materials, construction *sklad);
int main(void)
{
    construction *needed_materials = (construction *)malloc(sizeof(construction));
    construction *sklad = (construction *)malloc(sizeof(construction));
    fill_arr(needed_materials, sklad);
    int result = check(needed_materials, sklad);
    printf("Durvodelecat moje da napravi %d etajerki. \n", result);
    free(needed_materials);
    free(sklad);
    return 0;
}
void fill_arr(construction *needed_materials, construction *sklad)
{
    needed_materials->dulgi_daski = 4;
    needed_materials->kusi_daski = 6;
    needed_materials->malki_skobi = 12;
    needed_materials->golemi_skobi = 2;
    needed_materials->vint = 14;
    printf("Dulgi daski= ");
    scanf("%d", &sklad->dulgi_daski);
    printf("Kusi daski= ");
    scanf("%d", &sklad->kusi_daski);
    printf("Malki skobi= ");
    scanf("%d", &sklad->malki_skobi);
    printf("Golemi skobi= ");
    scanf("%d", &sklad->golemi_skobi);
    printf("Vintove= ");
    scanf("%d", &sklad->vint);
}
int check(construction *needed_materials, construction *sklad)
{
    int counter = 0;
    while (1)
    {
        if (sklad->dulgi_daski >= needed_materials->dulgi_daski && sklad->kusi_daski >= needed_materials->kusi_daski && sklad->malki_skobi >= needed_materials->malki_skobi &&
            sklad->golemi_skobi >= needed_materials->golemi_skobi && sklad->vint >= needed_materials->vint)
        {
            counter++;
            sklad->dulgi_daski -= 4;
            sklad->kusi_daski -= 6;
            sklad->malki_skobi -= 12;
            sklad->golemi_skobi -= 2;
            sklad->vint -= 14;
        }
        else
            break;
    }
    return counter;
}