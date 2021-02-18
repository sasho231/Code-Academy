/* Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция. */
#include <stdio.h>
#include <stdlib.h>
#define DIM1 4
#define DIM2 5
#define DIM3 2
void getarray(int array[DIM1][DIM2][DIM3]){
    int i=0,j=0,g=0;
    for(i=0;i<DIM1;i++){
        for(j=0;j<DIM2;j++){
            for(g=0;g<DIM3;g++){
                array[i][j][g] = rand() % 100;
            }
        }
    }
}
void printarray(int rows, int cols1, int cols2, int array[rows][cols1][cols2]){
    int i=0,j=0,g=0;
    for(i=0; i <rows; i++){
        for(j=0;j < cols1; j++){
            for(g=0; g < cols2; g++){
                printf("Values for array[%d][%d][%d]: %d\n",i,j,g, array[i][j][g]);
            }
        }
    }
}
void getarray1(int rows, int cols1, int cols2, int (*arra1ptr)[cols1][cols2]){
    int i=0,j=0,g=0;
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            for(g=0;g<rows;g++){
                    arra1ptr[i][j][g] = (rand() % 25) - 2;
            }
        }
    }

}
int main(void){
    int array[DIM1][DIM2][DIM3];
    int (*arptr)[DIM2][DIM3] = array;
    int array1[2][3][4];
    int (*array1ptr)[3][4] = array1;
    void (*ptr)(int, int, int, int [][DIM2][DIM3]) = printarray;
    void (*fptr)(int, int, int, int [][3][4]) = getarray1;
    (*fptr)(2, 3, 4, array1ptr);
    /* getarray1(2, 3, 4, array1ptr); */
    getarray(arptr);
    (*ptr)(DIM1, DIM2, DIM3, array);
    printf("Second array values: \n");
    printarray(2, 3, 4, array1);

    return 0;

}