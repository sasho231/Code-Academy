/* Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i = 0;
    int *array = NULL;
    int size = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    array = (int*)alloca(size);
    if(!array) exit(1);
    for(i=0;i<size;i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Elements are: ");
    for(i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    return 0;
}