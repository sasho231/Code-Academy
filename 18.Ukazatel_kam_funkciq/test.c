/* Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто. */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
int maint(void){
    int i = 0;
    int array[SIZE];
    int number, count = 0;
    for(number = 1; number <= 1000; number++){
        for(i=2; i <= number/2; i++){
            if(number % i == 0){
                count++;
            }
        }
    }
    if(count == 0 && number != 1){
        printf("%d ", number);
    }
    return 0;
}
