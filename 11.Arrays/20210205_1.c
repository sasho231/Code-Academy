#include <stdio.h>
void printStr(char *s);
int main(void){
    char *s = "Coding";
    char *p = NULL;
    p = s;
    printStr(p);
    return 0;
}
void printStr(char *s){
    int i = 0;
    for(i = 0; s[i] != '\0'; i++){
        printf("%c ", s[i]);
    }
    /* for(;*s;s++)
        printf("%c ", *s); */
}