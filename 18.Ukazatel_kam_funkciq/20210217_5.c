/* Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int array[5][5];
    int i =0, j = 0;
    for(i=0;i<5;i++){
        for(j=0; j < 5; j++){
            array[i][j] = rand() % 11;
            printf("Input values for array[%d][%d] are: %d\n", i,j, array[i][j]);
        }
    }
    for(i=0 ; i <5 ; i++){
        for(j = 0; j <5; j++){
            if(array[i][j] >= 1 && array[i][j] <= 5)
                printf("The value for array[%d][%d] is: %d\n",i, j, array[i][j]);
        }
    }
    return 0;
}