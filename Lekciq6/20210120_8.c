#include <stdio.h>
int main(void){
    int number = 0;
    for(;;){
        printf("number = %d\n", number);
        number ++;
        if(number==49) break;
    }
    return 0;
}