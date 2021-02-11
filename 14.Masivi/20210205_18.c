/* Задача 18. Напишете програма за умножение на два тримерни
масива, елемент по елемент. */
#include <stdio.h>
#define COLUMNS 3
#define ROWS 3
#define MATRIX 3
void getSum(void);
int main(void){
    getSum();
    return 0;
}
void getSum(void){
    
    int array1[COLUMNS][ROWS][MATRIX] = {{{1,5}, {2, 6}, {3, 7}},
                            {{1,5}, {2, 6}, {3, 7}},
                            {{1,5}, {2, 6}, {3, 7}}};
    
    int array2[COLUMNS][ROWS][MATRIX] = {{{2,3}, {1, 7}, {2, 10}},
                            {{1,5}, {2, 6}, {3, 7}},
                            {{1,5}, {2, 6}, {3, 7}}};

    int i =0, j =0, g = 0;
    int sum = 0;
    for(i=0; i < COLUMNS; i++){
        for(j=0; j < ROWS; j ++){
            for(g=0; g < MATRIX; g++){
                sum += array1[i][j][g] * array2[i][j][g];
            }
        }
    }
    printf("Sum is: %d\n", sum);
    

}
