/* Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    char string[] = "Coding master version 2!";
    char string1[] = "Hello world!";
    char *empty = NULL;
    char *empty1 = NULL;
    empty = (char*)malloc(strlen(string) + 1);
    empty1 = (char*)malloc(strlen(string1) + 1);
    strcpy(empty, string);
    strcpy(empty1, string1);
    printf("%s\n%s\n", empty, empty1);
    free(empty);
    free(empty1);
    return 0;
}