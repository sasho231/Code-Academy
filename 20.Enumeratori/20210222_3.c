/* Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
 */
#include <stdio.h>
#include <string.h>
struct shop{
    int quantity;
    float price;
    char name[25];
}__attribute__((packed));
int main(void){
    struct shop a = {.name = "chocolate"};
    a.price = 2.5;
    a.quantity = 50;
    printf("Product %s has price %.2f and quantity %d\n", a.name, a.price, a.quantity);
    return 0;
}