/* Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fptr;
    fptr = fopen("test2.txt", "a");
    fputs("\ntestove", fptr);
    fpos_t fpost;
    fgetpos(fptr, &fpost);
    printf("%ld", fpost);
    fclose(fptr);
    return 0;
}