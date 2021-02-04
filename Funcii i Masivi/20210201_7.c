#include <stdio.h>
int getSum(int number1, int number2){
    if(number2 < 1){
        return 1;
    }
    else{
        return number1 * getSum(number1 + 1, number2 - 1);
    }
}
int main(void){
    printf("Sum: %d\n", getSum(1, 30));
    return 0;
}