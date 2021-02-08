#include <stdio.h>
/* Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
int main(void){
    int array[5];
    int counter = 5;
    int *arrptr = array;
    printf("Enter the 5 numbers \n");
    int i = 0;
    for(i = 0;i<counter; i++){
        scanf("%d", &array[i]);
    }
    int j = 0;
    for(j = 0; j < counter; j++){
        printf("%d ", array[j]);
    }
    return 0;
}