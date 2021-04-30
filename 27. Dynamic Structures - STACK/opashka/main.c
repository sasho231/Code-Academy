#include "func.h"

int main(void){
 
    int n = 1;
    while(n != 0){
    printf("Enter number \n");
    scanf("%d", &n);
    write(n);
    }

    while(read(&n)){
        printf("%d ", n);
    }
}