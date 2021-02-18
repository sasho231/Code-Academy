/* Вариация: Да се направи същото с масив от символи. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *a, char *b);
int main(void){
    char symbols[] = {'a', 'c', 'a', 'z', 'g', 'q', 'b', 'd'};
    int i=0, j = 0;
    int size = strlen(symbols);
    for(i=0; i <size - 1; i++){
        for(j=0; j<size-1; j++ ){
            if(symbols[j] > symbols[j + 1])
                swap(&symbols[j], &symbols[j+1]);
        }
    }
    for(i=0; i < size; i++){
        printf("%c ", symbols[i]);
    }
}
void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}