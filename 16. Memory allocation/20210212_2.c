/* Задача 2 Разширяване на заделена памет с realloc
 */
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
    printf("Address %p\n", p);
    if(!p) printf("Not enough memory!");
    p = (int*)realloc(p, 100);
    printf("Address %p\n", p);
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