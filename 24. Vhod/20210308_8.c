/* Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл. */

#include <stdio.h>

int main(void){
    FILE *fptr = NULL;
    fptr = fopen("test2.txt", "wt+");
    if(fptr == NULL)
        perror("Cant open.");
    fputs("Hello its me! ", fptr);
    fputs("Aleksndar.", fptr);
    fclose(fptr);
    return 0;
}