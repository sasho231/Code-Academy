/* Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи. */
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
void fill(int *array, int size);
void bubblesort(int *array, int size);
int main(void){
    int size = 0, i =0;
    printf("How many numbers do you want? \n");
    scanf("%d", &size);
    int *array;
    array = (int*)malloc(size * sizeof(int));
    fill(array, size);
    bubblesort(array, size);
    printf("Sorted array: \n");
    for(i=0; i < size; i++){
        printf("%d ", *(array + i));    
    }
    return 0;

}
void fill(int *array, int size){
    int i =0;
    for(i=0; i < size; i++){
        printf("Enter values for array[%d]: ", i);
        scanf("%d", (array + i));
    }
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int *array, int size){
    int i=0,j=0;
    for(i=0; i < size - 1 ; i++){
        for(j=0 ; j < size - 1; j++){
            if(array[j] > array[j+1])
                swap(&array[j], &array[j + 1]);
        }
    }
}