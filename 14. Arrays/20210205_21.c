/* Задача 21. Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет. */
#include <stdio.h>
#define LENGHT 10
void bubbleSort(char s[], char b[]){
    char temp;
    int i, j;
    for(i=0; i < LENGHT; i++){
        b[i] = s[i];
    }

    for(i=0; i < LENGHT; i++){
        for(j= i + 1; j < LENGHT - 1; j++){
            if(b[j-1] > b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }

        }
    }
}
int main(void){
    char s[LENGHT] = {'a', 'r', 's', 'd', 'c', 'x', 'u', 'i', 'h', '\0'};
    char b[LENGHT];
    bubbleSort(s, b);
    printf("%s\n", b);
    return 0;
}