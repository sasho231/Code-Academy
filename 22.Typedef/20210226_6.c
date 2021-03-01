/* Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число */
#include <stdio.h>
typedef struct{
    int number;
    char str[64];
}key_t;
int main(void){
    key_t val = {23, "Coding"};
    printf("%d %s\n", val.number, val.str);
    return 0;
}