#include <stdio.h>
#include <stdlib.h>
/* Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак. */
int main(void){
    int array[3][3][3];
    int array1[3][3][3];
    int i =0, j =0, g = 0;
    int sum_arr = 0;
    int sum_arr1=0;
    for(i=0; i <3;i++){
        for(j=0; j < 3; i++){
            for(g=0; g < 3; g++){
                array[i][j][g] = (rand() % 21);
                array1[i][j][g] = (rand() % 21);
                sum_arr += array[i][j][g];
                sum_arr1 += array1[i][j][g];
                
            }
        }
    }
    if(sum_arr == sum_arr1)
        printf("Sum of array is equal to sum of array2.\n");
    else
        printf("Sums are not equal.");
    return 0;

}