/* Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана. */
#include <stdio.h>
#define LENGHT 7
void getArray(int array[], int array1[], int newarray[]);

int main(void){
    int array[LENGHT];
    int array1[LENGHT];
    int newarray[LENGHT];
    int i=0, j =0;
    for(i=0; i < LENGHT; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(j=0; j < LENGHT; j++){
        printf("Enter value for array1[%d]: ", j);
        scanf("%d", &array1[j]);
    }
    getArray(array, array1, newarray);
    return 0;

}
void getArray(int array[], int array1[], int newarray[]){
    int i=0, j = 0, g = 0, counter = 0;
    for(i=0; i < LENGHT; i++){
        newarray[g] = array[i] * array1[j];
        g++;
        j++;
    }
    for(i=0; i < LENGHT; i++){
        printf("New array of sum array * array1 is: %d ", newarray[i]);
    }
    
}