/* Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */
#include <stdio.h>
typedef int t_int;
typedef int (*t_sumfnc)(t_int*, t_int*);
t_sumfnc printFunc = NULL;
int sum(t_int* a, t_int*b){
    return *a + *b;
}
int main(void){
    printFunc = sum;
    t_int a = 5;
    t_int b = 10;   
    t_int* aptr = &a;
    t_int* bptr = &b;
    int result = (*printFunc)(aptr, bptr);
    printf("%d\n", result);
    return 0;
}