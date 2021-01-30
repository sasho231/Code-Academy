/* Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */
#include <stdio.h>
void checkEvenOrOdd(int number);
int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenOrOdd(number);
    return 0;

}
void checkEvenOrOdd(int number){
    if (number % 2 == 0){
        printf("Number is even.\n");
    }
    else{
        printf("Number is odd.\n");
    }
}