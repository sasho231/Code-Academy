/* Направете два триъгълника с отместване.
 */

#include <stdio.h>
#define ROWS 13
#define COLUMNS 50
struct point{
    int x;
    int y;
};
void printtriangle(char field [][COLUMNS]);
void maketriangle(char field[][COLUMNS], struct point a, struct point b);
void filltriangle(char field[][COLUMNS]){
    int i=0, j = 0;
    for(i=0; i < ROWS; i++)
        for(j=0; j <COLUMNS; j++)
            field[i][j] = '-';
}
int main(void){
    char field[ROWS][COLUMNS] = {0};
    struct point a = {3,4};
    struct point b = {7,10};
    filltriangle(field);
    maketriangle(field, a, b);
    printtriangle(field);
    return 0;

}
void maketriangle(char field[][COLUMNS], struct point a, struct point b){
    int i=0, j =0, counter = 0;
    int otmestvane = 10;
    int correction_value = 1;
    for(i=a.y; i <= b.y; i++){
        for(j= a.x; j <= a.y + counter - correction_value; j++){
            field[i][j] = '@';
        }
        counter++;
    }
    counter = 0;
    for(i = a.y; i <= b.y; i++){
        for(j = a.x + otmestvane; j <= a.y + counter + otmestvane - correction_value; j++){
            field[i][j] = '@';
        }
        counter++;
    }
}
void printtriangle(char field[][COLUMNS]){
    int i =0, j =0;
    for(i=0; i < ROWS; i++){
        for(j=0; j < COLUMNS; j++){
            printf("%c ", field[i][j]);
        }
        printf("\n");
    }
}