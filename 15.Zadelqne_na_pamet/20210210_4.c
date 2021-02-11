#include <stdio.h>
#include <stdlib.h>
#define MAX 52
/* Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата */
int main(void){
    int choice = 0;
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z',
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' }; 

    int password_lenght = 6;
    char result[password_lenght];
    int i =0;
    for(i=0; i < password_lenght; i++){
        result[i] = alphabet[rand() % MAX + 1];
    }
    printf("Your password is: %s\n", result);
    printf("To quit press 1\nIf you want new password press 2\n");
    scanf("%d", &choice);
    while(choice != 1){
        for(i=0; i < password_lenght; i++){
        result[i] = alphabet[rand() % MAX + 1];
    }
    printf("Your password is: %s\n", result);  
    printf("To quit press 1\nIf you want new password press 2\n");  
    scanf("%d", &choice);
    }


    return 0;



}
