/* Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:
 */

#include "func.h"

int main(void){

    init();
    add(12);
    add(15);
    for(int i=0; i < 9; i++){
        add(i);
    }
    print_list();
    int first;
    dell_First(&first);
    dell_First(&first);
    printf("\n \n");
    print_list();


    return 0;
}