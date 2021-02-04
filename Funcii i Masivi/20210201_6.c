/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30. */
#include <stdio.h>
int getSum(void){
    int sum = 1;
    int i = 1;
    while(i <= 30){
        sum *= i;
        i++;
    }
    return sum;
}
int main(void){
    printf("Sum is: %d\n", getSum());
    return 0;
}