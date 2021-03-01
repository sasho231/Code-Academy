/* Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */
#include <stdio.h>
#include <string.h>
typedef struct test{
    int number;
    float salary;
    char name[20];
}t_worker;
int main(void){
    t_worker Pesho;
    Pesho.number = 123;
    Pesho.salary = 156.23;
    strcpy(Pesho.name, "Pesho");
    printf("%d %f %s\n", Pesho.number, Pesho.salary, Pesho.name);
    return 0;
}