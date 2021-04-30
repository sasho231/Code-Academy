#include <stdio.h>
#include <stdlib.h>
/* Задача 19 Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?) */
int main(void){
    int array[10];
    int lenght = 10;
    int array1[10];
    int i =0;
    for(i=0; i < lenght; i++){
        array[i] = (rand() % 21);
        array1[i] = (rand() % 21);
        printf("array * array1 = %d\n", array[i] * array1[i]);
        if(array1[i] > 0)
            printf("Result is: %d\n", array[i] % array1[i]);
    }
    return 0;

}
