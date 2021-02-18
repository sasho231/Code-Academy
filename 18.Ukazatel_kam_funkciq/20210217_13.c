/* Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(int size, char *s){
    int i = 0;
    printf("Reversed string: \n");
    for(i=size; i >= 0; i--){
        printf("%c", *(s + i));
    }
    
}
int main(void){
    char s[100];
    printf("Enter text: ");
    gets(s);
    int size = 0;
    size = strlen(s);
    printf("%d\n", size);
    void (*ptr)(int, char *);
    ptr = reverse;
    (*ptr)(size, s);
    return 0;
}