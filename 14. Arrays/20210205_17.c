/* Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент. */
#include <stdio.h>
void getSum(int, int);
int main(void){
    int columns = 0;
    int rows = 0;
    printf("Enter columns for array: ");
    scanf("%d", &columns);
    printf("Enter rows for array: ");
    scanf("%d", &rows);
    getSum(columns, rows);
    return 0;

}
void getSum(int columns, int rows){
    int array[columns][rows];
    int array1[columns][rows];
    int i =0, j = 0;
    int sum = 0;
    for(i=0; i < columns; i++){
        for(j=0; j < rows; j++){
            printf("Enter values for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for(i=0; i < columns; i++){
        for(j=0; j < rows; j++){
            printf("Enter values for array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    for(i = 0;i<columns;i++){
        for(j=0;j<rows;j++){
            sum += array[i][j] * array1[i][j];
        }
    }
    printf("Sum of elements of the arrays is: %d\n", sum);

}