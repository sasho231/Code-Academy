/* Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */
#include <stdio.h>
#include <stdlib.h>
void getArray(int size, int *array);
int main(void){
    int size = 0;
    int *array = NULL;
    printf("Enter size: ");
    scanf("%d", &size);
    array = (int*)malloc(size * sizeof(int));
    if(!array) exit(1);
    getArray(size, array);
    fflush(stdin);
    printf("\nEnter another size for array: ");
    scanf("%d", &size);
    array = (int*)realloc(array, size * sizeof(int));
    if(!array) exit(1);
    getArray(size, array);
    free(array);
    return 0;

}
void getArray(int size, int *array){
    int i = 0;
    for(i=0; i < size; i ++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Elements are: \n");
    for(i=0; i <size; i++){
        printf("%d ", array[i]);
    }
}