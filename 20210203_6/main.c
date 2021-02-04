#include <stdio.h>
#include "func.h"
int main(void){
    int a = 10;
    int b = 20;
    int *aptr = NULL;
    aptr = &a;
    printf("Before swap: a = %d b = %d\n", a, b);
    my_swap(aptr, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
void my_swap(int *a, int *b){
    *a = *a + *b; // a = 10 + 20 = 30
    *b = *a - *b; // b = 30 - 20 = 10
    *a = *a - *b; // a = 30 - 10 = 20 
}