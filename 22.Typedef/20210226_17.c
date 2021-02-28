/* Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 3
#define B 10
typedef struct
{
    int diameter;
    float width;
} watermelon;
float randomFloat(float low, float high)
{
    srand(time(0));
    float random = ((float)rand()) / (float)RAND_MAX;
    float diff = high - low;
    float r = random * diff;
    return low + r;
}
void fillArrLemon(watermelon *ptr)
{
    int i = 0;
    float low = 0.5;
    float high = 3.5;
    srand(time(0));
    for (i = 0; i < A; i++)
    {
        (ptr + i)->diameter = (rand() % (140 - 15 + 1)) + 15;
        (ptr + i)->width = randomFloat(low, high);
    }
}
void fillArrPumpkin(watermelon *ptr_pumpkin)
{
    int i = 0;
    float low = 0.3;
    float high = 0.9;
    srand(time(0));
    for (i = 0; i < B; i++)
    {
        (ptr_pumpkin + i)->diameter = (rand() % (95 - 35 + 1)) + 35;
        (ptr_pumpkin + i)->width = randomFloat(low, high);
    }
}
void compare(watermelon *ptr_melon, watermelon *ptr_pumpkin)
{
    int i = 0;
    int avg_diameter_melon, avg_diameter_pumpkin;
    float avg_width_melon, avg_width_pumpkin;
    for (i = 0; i < A; i++)
    {
        avg_diameter_melon += (ptr_melon + i)->diameter;
        avg_width_melon += (ptr_melon + i)->width;
    }
    for (i = 0; i < B; i++)
    {
        avg_diameter_pumpkin += (ptr_pumpkin + i)->diameter;
        avg_width_pumpkin += (ptr_pumpkin + i)->width;
    }
    avg_diameter_melon = avg_diameter_melon / A;
    avg_width_melon = avg_width_melon / A;
    avg_diameter_pumpkin = avg_diameter_pumpkin / B;
    avg_width_pumpkin = avg_width_pumpkin / B;

    if (avg_diameter_melon > avg_diameter_pumpkin || avg_width_melon > avg_width_pumpkin)
    {
        printf("Better buy %d waterlemon sort melon with diameter %d sm and width %.2f sm instead %d waterlemon"
               " with diameter %d sm and width %.2f sm. \n",
               A, avg_diameter_melon, avg_width_melon, B, avg_diameter_pumpkin, avg_width_pumpkin);
    }
    else
    {
        printf("Better buy %d waterlemon sort pumpkin with diameter %d sm and width %.2f sm instead %d waterlemon"
               " with diameter %d sm and width %.2f sm. \n",
               B, avg_diameter_pumpkin, avg_width_pumpkin, A, avg_diameter_melon, avg_width_melon);
    }
}
int main(void)
{
    watermelon *ptr_melon;
    ptr_melon = (watermelon *)malloc(A * sizeof(watermelon));
    fillArrLemon(ptr_melon);
    watermelon *ptr_pumpkin;
    ptr_pumpkin = (watermelon *)malloc(B * sizeof(watermelon));
    fillArrPumpkin(ptr_pumpkin);
    compare(ptr_melon, ptr_pumpkin);
    free(ptr_melon);
    free(ptr_pumpkin);
    return 0;
}