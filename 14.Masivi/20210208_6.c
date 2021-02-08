/* 6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include <stdio.h>
void getMax(int *p, int);
int main(void){
    int counter = 0;
    printf("How many numbers would you want? ");
    scanf("%d", &counter);
    int arr[counter];
    int i =0;
    for(i=0; i<counter; i++){
        printf("Enter a number for array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    getMax(arr, counter);
    return 0;
    
}
void getMax(int *p, int counter){
    int i = 0;
    for(i=0; i < counter; i++){
        if(p[0] < p[i])
            p[0] = p[i];
    }
    printf("Max number is: %d\n", p[0]);
}