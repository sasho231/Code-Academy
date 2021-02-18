/* Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./ */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define SIZER 10
int main(void)
{
    int a[SIZE] = {1, 3, 5, 7, 8};
    int b[SIZE] = {0, 2, 4, 6, 8};
    int c[SIZER];
    int a_count = 0, b_count = 0, c_count = 0;
    int i = 0;
    while (c_count < SIZER)
    {
        if (a[a_count] < b[b_count])
        {
            c[c_count] = a[a_count];
            a_count++;
        }
        else if (b[b_count] < a[a_count])
        {
            c[c_count] = b[b_count];
            b_count++;
        }
        else
        {
            c[c_count] = a[a_count];
            c_count++;
            c[c_count] = b[b_count];
            a_count++;
            b_count++;
        }
        c_count++;
    }
    for (i = 0; i < SIZER; i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}