/* Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
 */
#include <stdio.h>
#include <stdlib.h>
const int km_price[10][2] = {
                            {1, 12},
                            {2, 21},
                            {3, 31},
                            {4, 40},
                            {5, 49},
                            {6, 58},
                            {7, 69},
                            {8, 79},
                            {9, 90},
                            {10, 101}
                            };
int main(void){
    FILE *fpIn = NULL, *fpOut = NULL;
    fpIn = fopen("input3.txt", "rt");
    fpOut = fopen("output3.txt", "wt");
    int kilometers = 0;
    int price = 0;
    int total_price = 0;
    printf("How many kilometers do you want to travel?\n");
    scanf("%d", &kilometers);

    if(kilometers == km_price[0][0])
        total_price = 12;
    else if(kilometers == km_price[1][0])
        total_price = 21;
    else if(kilometers == km_price[2][0])
        total_price = 31;
    else if(kilometers == km_price[3][0])
        total_price = 40;
    else if(kilometers == km_price[4][0])
        total_price = 49;
    else if(kilometers == km_price[5][0])
        total_price = 58;
    else if(kilometers == km_price[6][0])
        total_price = 69;
    else if(kilometers == km_price[7][0])
        total_price = 79;
    else if(kilometers == km_price[8][0])
        total_price = 90;
    else if(kilometers == km_price[9][0])
        total_price = 101;
    else if(10 < kilometers <= 20);


}