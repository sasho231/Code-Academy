/* Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива.
 */
#include <stdio.h>
int main(void){
    int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    /* int (*arrPtr)[10] = &arr;
    (*arrPtr)[2] = 5;
    (*arrPtr)[3] = 33;
    (*arrPtr)[4] -= 7;
    (*arrPtr)[6] += 10;
    (*arrPtr)[9] *= 3; */
    int *ptr = NULL;
    ptr = arr;
    ptr[2] = 5;
    ptr[3] = 33;
    ptr[4] -= 7;
    ptr[6] += 10;
    ptr[9] *= 3;
    
    for(int i =0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}