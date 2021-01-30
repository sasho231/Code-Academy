/* Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл. */
#include <stdio.h>
#include "functions.h"
int main(void){
    getAreaofSquare();

}
float getAreaofSquare(void){
    float a = 0;
    printf("a = ");
    scanf("%f", &a);
    float areaofsquare = a * a;
    printf("Area of square is: %f\n", areaofsquare);
    getResult();

}
int getResult(void){
    int number = 0;
    printf("Vavedi chislo: ");
    scanf("%d", &number);
    printf("++number = %d\n", ++number);
    printf("Sum of (number * number1) / 2 is %d", getSum(number));
}
int getSum(int number){
    int number1 = 0;
    printf("Enter a number1: ");
    scanf("%d", &number1);
    return (number * number1) / 2;
    
}