/* Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С. */
#include <stdio.h>
#include <string.h>
#define MAX 2
typedef struct{
    int number;
    char str[64];
}key_t;
int main(void){
    key_t keytab[MAX];
    for(int i=0; i < MAX; i++){
        printf("Enter value for number[%d]: ", i);
        scanf("%d", &keytab[i].number);
        printf("Enter text: ");
        scanf("%s", &keytab[i].str);
    }
    for(int i = 0;i < MAX; i++){
        printf("Number %d ", keytab[i].number);
        printf("Str: %s \n", keytab[i].str);
    }
    return 0;
}