/* Задача 6. Направете по подобен начин триъгълник:
 */
#include <stdio.h>
#define ROWS 15
#define COLUMNS 15
struct point{
    int a;
    int b;
};
void fillarray(char field[][COLUMNS]);
void maketriangle(char field[][COLUMNS], struct point a, struct point b);
int main(void){
    char field[ROWS][COLUMNS];
    int i=0,j=0;
    struct point a = {3, 4};
    struct point b = {7, 10};
    fillarray(field);
    maketriangle(field, a, b);
    for(i=0; i < ROWS; i++){
        for(j=0; j <COLUMNS; j++){
            printf("%c ", field[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void fillarray(char field[][COLUMNS]){
    int i=0,j=0;
    for(i=0; i < ROWS; i++){
        for(j=0; j < COLUMNS; j++){
            field[i][j] = '-';
        }
    }
}
void maketriangle(char field[][COLUMNS], struct point a, struct point b){
    int i=0,j=0, counter = 0;
    for(i=a.b; i <= b.b; i++){
        for(j=a.a; j <= a.b + counter; j++){
            field[i][j] = '@';
        }
        counter++;
    }
}