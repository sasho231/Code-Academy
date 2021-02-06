/* Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s . */
#include <stdio.h>
void my_strncpy(char *, char*, int);
int main(void){
    char *t = "codokasd";
    char s[] = "";
    int number = 3;
    my_strncpy(s, t, number);
    return 0;
}
void my_strncpy(char *s, char *t, int n){
    char *sptr = s;
    char *tptr = t;
    int i =0;
    for(i = 0; i < n; i++){
        *sptr = t[i];
        printf("%c", *sptr);
        sptr++;
    }
    
}