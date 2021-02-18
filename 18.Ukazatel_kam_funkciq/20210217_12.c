/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *getpassword(int lengh_small, int lenght_high, int lenght_digits, int lenght_symbols, int size){
    char p[size];
    char *password = p;
    int counter = 0;
    char small_letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z'};
    char high_letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z'};
    char digits[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char symbols[] = {'!',  '#', '@', '$', '%', '^', '&', '*'};
    int i = 0;
    for(i=0; i < lengh_small; i++){
        password[i] = small_letters[rand() % strlen(small_letters) + 1];
        counter++;
    }
    for(i = 0; i< lenght_high; i++){
        password[counter] = high_letters[rand() % strlen(high_letters) + 1];
        counter++;
    }
    for(i=0; i < lenght_digits;i++){
        password[counter] = digits[rand() % sizeof(digits)];
        counter++;
    }
    for(i=0; i < lenght_symbols; i++){
        password[counter] = symbols[rand() % sizeof(symbols) ];
        counter++;
    }
    
    
    for(i=0; i <2; i++){
        printf("%c", password[i]);
    }
    for(i = size; i > 2; i--){
        printf("%c", password[i]);
    }

}
int main(void){
    int small =0, high=0, digits=0, symbols = 0;
    int size = 0;
    printf("How long password do you want? ");
    scanf("%d", &size);
    printf("How many small letters do u want? ");
    scanf("%d", &small);
    printf("How many high letters do u want? ");
    scanf("%d", &high);
    printf("How many digits do u want? ");
    scanf("%d", &digits);
    printf("How many symbols do u want? ");
    scanf("%d", &symbols);

    /* getpassword(small, high, digits, symbols, size); */
    getpassword(small, high, digits, symbols, size);
    return 0;

}