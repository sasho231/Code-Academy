/* Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */
#include <stdio.h>
#include "lice.h"

int main(){
    float a = 0;
    float b = 0;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    float areaOfTriangle = getAreaofTriangle(a, b);
    float areaOfRectangle = getAreaofRectangle(a, b);
    printf("Area of triangle is: %.2f\n", areaOfTriangle);
    printf("Area of rectangle is: %.2f\n", areaOfRectangle);
    return 0;
}
float getAreaofTriangle(float a, float b){
    return (a * b) / 2;
}
float getAreaofRectangle(float a, float b){
    return getAreaofTriangle(a, b) * 2;

}