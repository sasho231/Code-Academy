/* Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира? */
#include <stdio.h>
int main(void){
    int a = 5;
    int *p = &a;
    printf("%d\n", *p);
    printf("Address %p\n", p);
    return 0;
}