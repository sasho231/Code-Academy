#include <stdio.h>
int main(){
    int number = 0;
    printf("Vavedete chislo: \n");
    scanf("%d", &number);
    if(number < 10){
        printf("Value is less than 10\n");
    }
    else if(number < 20){
        printf("Value is less than 20 \n");
    }
    else{
        printf("Number is bigger than 20 \n");
    }
    return 0;
}