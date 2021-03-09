/* Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност. */

#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fptr;
    long position;
    fptr = fopen("test.txt", "w");
    if(NULL == fptr) perror("error");
    if(fprintf(fptr, " #&*!@#$")){
        position = ftell(fptr);
        printf("Saved symbols = %ld", position);
    }
    fclose(fptr);
    return 0;
}