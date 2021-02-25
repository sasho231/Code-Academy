#include <stdio.h>
/* #define swap(type,x,y) \
                    { \
                    type __swap_temp; \
                    __swap_temp = (y); \
                    (y) = (x); \
                    (x) = __swap_temp; \
                    } */
#define swap(t,x,y) {t i = x; x=y; y=i;}
int main(void){
    int x = 5;
    int y = 15;
    swap(int, x, y);
    printf("x= %d y= %d\n", x, y);
    return 0;   
}