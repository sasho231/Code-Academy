/* Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана. */
#include <stdio.h>
int main(void){
    int a = 0;
    printf("a= ");
    scanf("%d",&a);
    int *p = &a;
    int sum = *p + 5;
    printf("a+ 5 = %d\n", sum);
    return 0;
}