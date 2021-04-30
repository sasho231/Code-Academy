/* Задача 5 Разширяване на заделена памет с realloc */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i = 0;
    int *array = NULL;
    int array_size = 6;
    array = (int*)malloc(array_size * sizeof(int));
    if(!array) exit(1);
    array_size = 10;
    array = (int*)realloc(array, array_size * sizeof(int));
    if(!array) exit(1);
    return 0;
}