/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i = 0;
    int number = 0;
    int *array = NULL;
    printf("How many numbers do you want?");
    scanf("%d", &number);
    array = (int*)malloc(number * sizeof(int));
    if(!array) printf("Not enough memory!");
    for(i=0; i < number; i ++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", (array + i));
    }
    for(i=0; i < number; i++){
        printf("%d ", *(array+i));
    }
    free(array);
    return 0;

}