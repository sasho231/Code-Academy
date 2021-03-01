/* Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова */
#include <stdio.h>
int main(void)
{
    int number = 47;
    int x = 3;
    double result = number / x;
    printf("Res without cast %f\n", result);
    result = (double)number / x;
    printf("Res with cast %f\n", result);

    short int val1 = 13;
    int *pval = (int *)&val1;
    *pval = 31;
    printf("%d, %ld\n", val1, *pval);
    char cval = 'x';
    double *cvalptr = (double *)&cval;
    *cvalptr = 0.0;
    printf("%c %f", cval, *cvalptr);
    return 0;
}