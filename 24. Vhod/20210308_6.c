/* Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори; */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fptr = NULL;
    fptr = fopen("test1.txt", "rt");
    char name[64], st[64];
    int n;
    fscanf(fptr, "%[^,], %[^,], %d", &name, &st, &n);
    printf("%s %s %d", name, st, n);
    fclose(fptr);
    return 0;

}