/* Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.  */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float temperature;
    int height;

} stat;
void menu(stat *hija_vihren, stat *vruh_vihren);
int main(void)
{
    stat *hija_vihren = (stat *)malloc(sizeof(stat));
    stat *vruh_vihren = (stat *)malloc(sizeof(stat));
    menu(hija_vihren, vruh_vihren);
    free(hija_vihren);
    free(vruh_vihren);
    return 0;
}
void menu(stat *hija_vihren, stat *vruh_vihren)
{
    hija_vihren->height = 1950;
    vruh_vihren->height = 2918;
    int choice = 0;
    while (choice != 3)
    {
        printf("Which temperature calculation do you want? \n");
        printf("For hija Vihren -> vruh Vihren press 1\n");
        printf("For vruh Vihren -> hija Vihren press 2 \nTo quit press 3 \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You choose to calculate temperature from hija Vihren to vruh Vihren \n");
            printf("Enter temperature in hija Vihren. \n");
            scanf("%f", &hija_vihren->temperature);
            vruh_vihren->temperature = hija_vihren->temperature - (((vruh_vihren->height - hija_vihren->height) / 100) * 0.5);
            printf("Temperature in vruh Vihren is %.1f celsium .", vruh_vihren->temperature);
            break;
        case 2:
            printf("You choose to calculate temperature from vruh Vihren to hija Vihren \n");
            printf("Enter temperature in vruh Vihren \n");
            scanf("%f", &vruh_vihren->temperature);
            hija_vihren->temperature = vruh_vihren->temperature + (((vruh_vihren->height - hija_vihren->height) / 100) * 0.5);
            printf("Temperature in hija Vihren is %.1f celsium. \n", hija_vihren->temperature);
            break;
        }
    }
}