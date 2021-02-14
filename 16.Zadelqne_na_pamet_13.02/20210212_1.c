/* Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int sum = 0;
    int *p = NULL;
    int number = 0;
    int i = 0;
    printf("Enter number of elements: ");
    scanf("%d", &number);
    p = (int*)malloc(number * sizeof(int));
    if(!p) printf("Not enough memory!");
    for(i=0; i < number; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", (p + i));
    }
    for(i=0; i < number; i++){
        sum+= *(p + i);
    }
    printf("Sum is: %d\n", sum);
    free(p);
    return 0;
}