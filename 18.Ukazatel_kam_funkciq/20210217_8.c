/* Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i=0, n=0;
    int t1=0, t2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *array = NULL;
    array = (int*)malloc(n * sizeof(int));
    *(array + i) = t1;
    array[1] = t2;
    for(i = 2; i < n; i++){
        array[i] = array[i-1] + array[i - 2];
    }
    for(i=0; i < n; i++){
        printf("%d ", array[i]);
    }
    free(array);
    return 0;
}