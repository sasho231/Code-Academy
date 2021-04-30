/* Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */
#include <stdio.h>
int main(void){
    int number = 0;
    printf("Enter columns for the array: ");
    scanf("%d", &number);
    int array[number];
    int i =0, sum = 0;
    double avg = 0.0;
    for(i=0; i < number; i++){
        printf("Enter a value for array[%d]: ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    avg = (double)sum / number;
    printf("Average is: %.2f\n", avg);
    return 0;
}