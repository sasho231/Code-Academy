/* Задача 9. Направете функця add(), която събира две точки. */
#include <stdio.h>
struct point{
    int x;
    int y;
};
int add(struct point a, struct point b);
int main(void){
    struct point a = {10, 15};
    struct point b = {20, 30};
    printf("%d\n", add(a, b));
    return 0;
}
int add(struct point a, struct point b){
    return a.x + a.y + b.x + b.y;
}