/* Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
 */
#include <stdio.h>
struct point{
    int x;
    int y;
};
struct rect{
    struct point a;
    struct point b;
};
struct rect makepoint();
void print(char field[][15]);
int main(void){
    int i=0, j =0;
    struct rect screen1;
    screen1 = makepoint();
    char field[15][15] = {0};
    for(i=screen1.a.y; i <= screen1.b.y ; i++){
        for(j=screen1.a.x; j <= screen1.b.x; j++){
            field[i][j] = '-';
        }
    }
    print(field);
    return 0;
}
struct rect makepoint(){
    struct rect screen;
    screen.a.x = 0;
    screen.a.y = 0;
    screen.b.x = 15;
    screen.b.y = 15;
    return screen;
}
void print(char field[][15]){
    int i=0, j =0;
    for(i=0; i < 15; i++){
        for(j=0; j <15;j++){
            printf("%c ", field[i][j]);
        }
        printf("\n");
    }
}