/* Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
Вземете бележката от масата, на нея пише в кое чекмедже (на скрина)
ще намерите бележката, на която пише къде е палтото (в гардероба);
Обърнете внимание на броя на звездичките! */
#include <stdio.h>
int main(void){
    int a = 0;
    printf("a= ");
    scanf("%d", &a);
    int *p = &a;
    int **ptr = &p;
    **ptr = 15;
    printf("a= %d **ptr = %d *p = %d", a, **ptr, * p);
    return 0;
}