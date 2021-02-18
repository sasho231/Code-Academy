/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.  */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *getPassword(int lenght){
    char *password = NULL;
    password = (char*)malloc(lenght * sizeof(char));
    char symbols[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z',
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z', '1', '2', '3',
                          '4', '5', '6', '7', '8', '9', '!',
                          '#', '@', '$', '%', '^', '&', '*' };
    int size = strlen(symbols); 
    int i = 0;
    for(i=0; i < lenght - 1; i++){
        password[i] = symbols[rand() % size + 1];
    }
    return (char*)password;
}
int main(void){
    int lenght = 0;
    printf("How many characters password do you want? ");
    scanf("%d", &lenght);
    char *ptr = NULL;
    ptr = getPassword(lenght);
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}