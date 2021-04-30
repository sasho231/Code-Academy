/* Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг) */
#include <stdio.h>
#define string(x) #x
int main(void){
    int k;
    printf(string(k));
    return 0;
}