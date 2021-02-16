/* Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf. */
#include <stdio.h>
int main(void){
    int a = 102;
    int *p = &a;
    printf("Addres of pointer is %p\n", p);
    return 0;
}