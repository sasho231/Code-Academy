/* Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки. */
#include <stdio.h>
struct point{
    int x;
    int y;
};
struct point makepoint(int x, int y);
int main(void){
    int x = 10;
    int y = 5;
    makepoint(x, y);
    return 0;
}
struct point makepoint(int x, int y){
    struct point a;
    a.x = x;
    a.y = y;
    printf("Cordinates are: x= %d y= %d \n", a.x, a.y);
    return a;
}