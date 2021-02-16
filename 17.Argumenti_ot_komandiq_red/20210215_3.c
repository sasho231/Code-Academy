/* Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char. */
#include <stdio.h>
int main(void){
    int *p = NULL;
    float *d = NULL;
    char *s = NULL;
    int a = 50;
    p = &a;
    float b = 15.2;
    d = &b;
    char string[] = "Hello world";
    s = string;
    printf("*p = %d , *d = %f , *s = %s", *p, *d, s);
    return 0;

}