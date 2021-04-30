/* Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i = 0;
    int *p = NULL;
    int size = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    p = (int*)calloc(size, sizeof(int));
    if(!p) exit(1);
    for(i=0; i < size; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", (p + i));
    }
    printf("Elements are: ");
    for(i=0; i < size; i ++){
        printf("%d ", *(p+i));
    }
    free(p);
    return 0;
}