/* Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fptr = NULL;
    fptr = fopen("test2.txt", "a");
    fputs("\nTest", fptr);
    long fpos = ftell(fptr);
    printf("%ld", fpos);
    fclose(fptr);
    return 0;
}