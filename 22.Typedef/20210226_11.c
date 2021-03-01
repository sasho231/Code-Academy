/* Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int number;
    struct node *ptr;
}node;
int main(void){
    node *val = (node*)malloc(sizeof(node));
    if(!val) exit(1);
    val->number = 153;
    int num = 123;
    printf("%d\n", val->number);
    printf("%d\n", sizeof(*val));
    free(val);
    return 0;
}