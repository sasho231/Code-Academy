/* Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>
#include <string.h>
union number{
    int number;
    float number1;
    char s[20];
}__attribute((packed));
int main(void){
    union number val;
    val.number = 55;
    printf("Val.num = %d\n", val.number);
    strcpy(val.s, "asd");
    printf("%s\n", val.s);
    val.number1 = 6.3;
    printf("%f\n", val.number1);
    return 0;
}