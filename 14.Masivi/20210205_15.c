/* Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове). */
#include <stdio.h>
#define COLUMN 2
#define ROW 2
void getAverage(void);
int main(void){
    getAverage();

    return 0;
}
void getAverage(void){

    int array[COLUMN][ROW];
    int i =0;
    int j = 0;
    int total_sum = 0;
    int sum_column = 0;
    int sum_row1 = 0;
    int counter = 0;
    for(i = 0; i<COLUMN; i++){
        for(j=0; j < ROW; j++){
            printf("Enter a number for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for(i = 0; i < COLUMN; i++){
        for(j = 0; j < ROW; j++){
            total_sum += array[i][j];
        }
    }
    for(i=0; i < COLUMN; i++){
        for(j=0; j < ROW - 1; j++){
            counter++;
            sum_row1 += (array[i][j]);
        }
    }
    printf("Average sum of first column is: %d\n", sum_row1/counter);   
    int sum_row2 = 0;
    counter = 0;
    for(i=0; i < COLUMN; i++){
        for(j = 1; j < ROW; j++){
        counter++;
        sum_row2 += (array[i][j]);
        }
    }
    printf("Average sum of second column is: %d\n", sum_row2 / counter);
    counter = 0;
    for(i = 0; i < COLUMN - 1; i++){
        for(j=0; j < ROW; j ++){
            sum_column += array[i][j];
            counter++;
        }
    }
    printf("Average sum of first row is: %d\n", sum_column / counter);
    counter = 0;
    sum_column = 0 ;
    for(i = 1; i < COLUMN; i++){
        for(j = 0;j < ROW; j++){
            sum_column += array[i][j];
            counter++;
        }
    }
    printf("Average sum of second row is: %d\n", sum_column / counter);

}