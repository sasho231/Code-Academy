/* Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.
Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип. */

#include <stdio.h>
int main(void)
{
    typedef long long int t_number;
    t_number big = 12341212321321;
    typedef t_number *p;
    p pointer;
    pointer = &big;
    printf("Value %lld, size %lld\n ptr= %lld\n", big, sizeof(big), *pointer);
    return 0;
}