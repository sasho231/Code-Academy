/* Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */
#include <stdio.h>
#include <ctype.h>
void lower(char s[]){
    int i =0;
    for(i = 0; s[i]; i++){
        s[i] = tolower(s[i]);
    }
}
int main(void){
    char s[] = "CoDing";
    lower(s);
    printf("The lowered string is: %s\n", s);
    return 0;
}