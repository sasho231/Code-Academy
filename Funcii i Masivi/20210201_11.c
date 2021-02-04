/* Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]
 */
#include <stdio.h>
void squeeze(char s[], char c){
    int writer = 0;
    int reader = 0;
    while(s[reader]){
        if(s[reader] != c){
            s[writer++] = s[reader];
        }
        reader++;
    }
    s[writer] = 0;
}
int main(void){
    char s[] = "";
    char c;
    printf("Enter a text: ");
    scanf("%s", &s);
    printf("Enter a symbol to remove from the text: ");
    scanf(" %c", &c);
    squeeze(s, c);
    printf("Fixed string is: %s\n", s);
    return 0;
}