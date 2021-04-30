/* Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата */
#include <stdio.h>
#include <string.h>
union test{
    int number;
    int number1;
    char s;
}__attribute((packed));
int main(void){
    union test val;
    val.number = -7;
    printf("number= %d\n", val.number);
    val.number1 = 10;
    printf("number1= %d\n", val.number1);
    val.s = 'c';
    printf("char= %c\n", val.s);
/*     union test val1 = {-7, 10, 'c'};
    printf("num = %d, num1 = %d, str = %c\n", val1.number, val1.number1, val1.s); */
    return 0;
}