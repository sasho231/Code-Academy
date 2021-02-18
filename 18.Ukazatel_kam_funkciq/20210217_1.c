/* Задача 1. Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fplus(int a, int b){
    return a + b;
}
int fminus(int a, int b){
    return a -b;
}
int main(int argc, char *argv[]){
    int (*ptr)(int, int) = NULL;
    if(argc < 3)
        printf("Usage %s +/- arg1 arg2\n", argv[0]);
    else if('-' == argv[2][0])
        ptr = fminus;
    else if('+' == argv[2][0])
        ptr = fplus;
    (NULL == ptr) ? 0 : printf("\nResult: %d\n",
    (*ptr)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}