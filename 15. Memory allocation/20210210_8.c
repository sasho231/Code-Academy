/* Решете задачата за генериране на 6 буквена парола с
пойнтери. */
#define MAX 52

#include <stdlib.h>
#include <stdio.h>
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
    char *p = result;
    for(i = 0; i<password_lenght; i++){
        *(p + i) = alphabet[rand() % MAX + 1];      
    }
    printf("Your password is: %s\n", result);
    printf("To quit press 1\nIf you want new password press 2\n");
    scanf("%d", &choice);
    while(choice != 1){
        for(i = 0; i<password_lenght; i++){
        *(p + i) = alphabet[rand() % MAX + 1];      
    }
    printf("Your password is: %s\n", result);  
    printf("To quit press 1\nIf you want new password press 2\n");  
    scanf("%d", &choice);
    }


    return 0;



}
