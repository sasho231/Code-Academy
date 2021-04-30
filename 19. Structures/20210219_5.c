/* Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */

#include <stdio.h>
#define ROWS 15
#define COLUMNS 15
struct point{
    int a;
    int b;
};
struct rect{
    struct point a;
    struct point b;
};
int main(void){
    int i=0, j = 0;
    char array[ROWS][COLUMNS];
    for(i=0; i < ROWS; i++){
        for(j=0; j < COLUMNS; j++){
            array[i][j] = '-';
        }
    }
    for(i=0; i < ROWS; i++){
        for(j=0; j < COLUMNS; j++){
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    struct point a = {3, 4};
    struct point b = {7, 10};
    array[3][4] = '@';
    array[7][10] = '@';
    for(i=a.a ; i <= b.a; i++){
        for(j=a.b; j <= b.b; j++){
            array[i][j] = '@';
        }
        
    }
    for(i=0; i < ROWS; i++){
        for(j=0; j < COLUMNS; j++){
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}