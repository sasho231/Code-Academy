#include <stdio.h>
int main(void){
    int x = 10;
    int y = 10;
    int true = 0 ;
    int false = 0;
    true = x && y &&x << 1;
    printf("%d\n", true);
    true = x && y ^ x << 1;
    printf("%d\n", true);
    return 0;

}