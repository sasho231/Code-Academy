/* Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането. */
#include <stdio.h>
int main(void){
    int arr[10] ={23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int sum = 0;
    int *arrptr = &arr[1];
    int i = 0;
    for(; *arrptr; arrptr+=2)
        sum += *arrptr;
    /* for(int i =0; i < 10; i+=2){
        sum += *(arrptr + i);
    } */
    printf("Sum is %d\n", sum);
    return 0;
}
