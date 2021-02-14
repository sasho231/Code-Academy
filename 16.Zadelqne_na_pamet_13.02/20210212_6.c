/* Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    char *buffer = NULL;
    int size = 2;
    char array[2];
    buffer = (char*)malloc(size * sizeof(char));
    if(!buffer) exit(1);
    char c;
    int i = 0;
    printf("Enter characters: \n");
    while((c = getchar()) != EOF){
        *(buffer + i) = c;
        i++;
        size++;
        if(!buffer) 
            buffer = (char*)realloc(buffer, size* sizeof(char));
    }  
    for(i=0; i < size; i++){
        printf("%c", *(buffer + i));
    }
    free(buffer);
    return 0;
}