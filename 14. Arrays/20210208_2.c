/* Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include <stdio.h>
int main(void){
    int array[5][5];
    int i=0;
    int j = 0;
    for(i=0; i < 5; i++){
        for(j=0; j < 5; j++){
            printf("Enter value for array[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Elements are: \n");
    for(i = 0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", array[i][j]);
            
        }
    }
    return 0;
}