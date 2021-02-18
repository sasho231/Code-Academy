/* Задача 2. Добавете към горния код функции за умножение
и деление. */
#include <stdio.h>
#include <stdlib.h>
int fplus(int a, int b){return a + b;}
int fminus(int a, int b){return a - b;}
int fumnojenie(int a, int b){return a * b;}
int fdivide(int a, int b){return a / b;}
int main(int argc, char *argv[]){
    int (*ptr)(int, int) = NULL;
    if(argc < 3){
        printf("\n Usage: %s +/- arg1 arg2 \n", argv[0]);
    }
    else if('-' == argv[2][0])
        ptr = fminus;
    else if('+' == argv[2][0])
        ptr = fplus;
    else if('x' == argv[2][0])
        ptr = fumnojenie;
    else if('/' == argv[2][0]){
        if(argv[3][0] == '0')
            printf("Cant divide by zero!\n");
        else
            ptr = fdivide;
    }
    (NULL == ptr) ? 0:printf("Result: %d\n", (*ptr)(atoi(argv[1]), atoi(argv[3])));
    return 0;
    

}