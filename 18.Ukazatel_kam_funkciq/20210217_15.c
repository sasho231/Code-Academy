/* Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6) */
#include <stdio.h>
#include <stdlib.h>
void printNumber(int choice){
    int i = 0;
    int array[6];
    int digits[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (choice == 1)
    {
        for (i = 0; i < 5; i++){
            if(array[i] != array[i-1]){
                array[i] = rand() % 36;
                printf("%d ", array[i]);
            }   
        }
    }
    if(choice == 2){
        for (i = 0; i < 6; i++){
            if(array[i] != array[i-1]){
                array[i] = rand() % 43;
                printf("%d ", array[i]);
            }   
        }
    }
    if(choice == 3){
       for (i = 0; i < 6; i++){
            if(array[i] != array[i-1]){
                array[i] = rand() % 50;
                printf("%d ", array[i]);
            }   
        } 
    }

}
int main(void)
{
    printf("Welcome to TOTO. For 5/35 press 1, for 6/42 press 2, for 6/49 press 3 .\n");
    int choice = 0;
    scanf("%d", &choice);
    printNumber(choice);
    
    return 0;
}