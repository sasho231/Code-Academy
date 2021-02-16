/*  Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char s[] = "Hello World!";
    char *ptr = NULL;
    ptr = (char*)malloc(strlen(s) + 1);
    memset(ptr, 0, strlen(ptr));
    strcpy(ptr, s);
    puts(ptr);
    free(ptr);
    return 0;
}