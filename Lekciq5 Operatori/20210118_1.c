#include <stdio.h>
int main(void){
    int x = 10;
    int y = 10;
    int true = 0;
    int false = 0;
    true = x == y;
    printf("%d\n", true);
    false = x != y;
    printf("%d\n", false);
    return 0;
}