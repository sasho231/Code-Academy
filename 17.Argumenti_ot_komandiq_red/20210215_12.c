/* Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
 */
#include <stdio.h>
#include <stdlib.h>
void defarray(void);
int main(void){
    defarray();
    return 0;
}
void defarray(void){
    int array[10][10][10];
    int sum =0;
    int counter = 0;
    int i =0, j =0, g = 0;
    for(i=0; i < 10; i++){
        for(j=0;j<10;j++){
            for(g=0;g<10;g++){
                array[i][j][g] = rand() % 50;
                sum += array[i][j][g];
                counter++;
            }
        }
    }
    printf("%d\n", sum / counter);
}