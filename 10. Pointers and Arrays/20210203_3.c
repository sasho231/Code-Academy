/* Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1. */
#include <stdio.h>
int linSearch(int a[], int l, int d){
    int i =0;
    int position = -1;
    for(i = 0; i < l; i++){        
        if(a[i] == d){
            position = i;                        
        }
    }
    return position;
}
int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int l = 10;
    int d = 5;
    printf("%d is found at index: %d\n", d, linSearch(a, l, d));
    return 0;
}