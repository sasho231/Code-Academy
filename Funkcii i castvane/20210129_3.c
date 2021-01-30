/* Задача 3. Напишете функция, която връща резултат (а+в)*4. */
#include <stdio.h>
int getResult(int a, int b);
int main(){
    int a = 0;
    int b = 0;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Result of (a+b)*4 is %d\n", getResult(a, b));
    return 0;
    }
int getResult(int a, int b){
    return (a + b) * 4;
}