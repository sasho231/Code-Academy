#include <stdio.h>
/* Напишете програма, която трябва да отпечата таблица за преобразуване от Целзий във Фаренхайт,
 от -50 до +150 градуса по Целзий, на стъпки от 5 градуса. Температурата по целзий се изчислява 
 по формулата 5 * (фаренхаит – 32)/9.*/
int main(void)
{
    float celsius;
    float fahrenheit = 0;
    printf("-----------------------------------");
    printf("\n   Celsius            Fahrenheit\n");
    for (celsius = -50; celsius <= 150; celsius += 5)
    {
        printf("-----------------------------------");
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("\n | %6.2f%cC\t |\t%6.2f%cF |\n", celsius, 248, fahrenheit, 248);
    }
    printf("-----------------------------------");
    return 0;