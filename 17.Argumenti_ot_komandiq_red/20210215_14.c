/* Решете задачата за генериране на 6 буквена парола с
пойнтери. */
#include <stdio.h>
#include <stdlib.h>
#define MAX 52
void getpass(void);
int main(void){
    getpass();
    return 0;

}
void getpass(void){
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z',
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' };
    char result[] = "******";
    char *r = result;
    for(;*r; r++){
        *r = alphabet[rand() % MAX + 1];
        printf("%c", *r);
    }
}