/* Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>
int printArr(int a[], int i){
    int j =0;
    for(j=0; j< i; j++){
        printf("%d ", a[j]);       
    }
}
int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int i = 5;
    printArr(a, i);
    return 0;
}
