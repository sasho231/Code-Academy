/* Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */
#include <stdio.h>
#include <string.h>
void convert(int number, char s[]);
int main(void){
    char s[64] = "";
    int number = 0;
    printf("Enter a number to convert into Binary: ");
    scanf("%d", &number);
    

    convert(number, s);
    printf("%d -> 0b%s",number, strrev(s));
    return 0;

}
void convert(int number, char s[]){
    int i = 0;
    int c = 0;
    char m[64] = "01";
    do{
        i = number % 2;
        number = number / 2;
        s[c] = m[i];
        c++;
    }
    while (number > 0);
}