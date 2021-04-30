/* Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция: */
#include <stdio.h>
#define GENERIC_MAX(type,x,y) {type type##_max(type x, type y){(x) > (y)) ? (x) : (y)}}



int main(void){
    int x = 5;
    int y = 10;
    int rez = GENERIC_MAX(int, x, y);
    return 0;
}

/* neshto ne raboti */