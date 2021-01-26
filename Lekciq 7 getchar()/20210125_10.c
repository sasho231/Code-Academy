#include <stdio.h>
#include <string.h>
void reverse(char s[]);
int main(void){
    char s[] = "Welcome!";
    
    
    reverse(s);
    return 0;
}
void reverse(char s[]){
    int i = 0;
    for(i = strlen(s) - 1; i >= 0; i--){
        printf("%c", s[i]);
    }
}