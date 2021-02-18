/* Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";
. */
#include <stdio.h>
#include <string.h>
int findchar(char array[]);
int main(void){
    char array[] = "This is a string to test my idea for search in a char and ....";
    printf("'a' is found %d times. \n", findchar(array));
    return 0;
}
int findchar(char array[]){
    int counter = 0;
    int size = strlen(array);
    int i =0;
    for(i=0; i < size; i++){
        if(array[i] == 'a')
            counter++;
    }
    return counter;
}