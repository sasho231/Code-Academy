/* Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита.  */
#include <stdio.h>
#pragma pack(1)
struct test{
    char character1 : 8;
    char charc : 8; /* kato zadam 6 ne mi raboti */
    unsigned short int number : 3;
    unsigned short int number1 : 3;

};
int main(void){
    struct test val;
    val.number = 7;
    val.charc = 'c';
    printf("Number= %d, character= %c\n", val.number, val.charc);
    printf("Size of struct= %d\n", sizeof(val));
    val.character1 = 'b';
    val.number1 = 3;
    printf("Number= %d, character= %c\n", val.number1, val.character1);
    printf("Size of struct= %d\n", sizeof(val));
    return 0;
}