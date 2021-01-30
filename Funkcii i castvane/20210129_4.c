/* Задача 4. Напишете функция, която връща резултат a*2 + b*c */
#include <stdio.h>
int getResult(int, int, int);
int main(void){
    int c = 0;
    int a = 0;
    int b = 0;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("Result of a*2 + b*c is: %d\n", getResult(a, b, c));
    return 0;

}
int getResult(int a, int b, int c){
    return a * 2 + b * c;
}