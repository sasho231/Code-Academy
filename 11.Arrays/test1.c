/* Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s . */
#include <stdio.h>
void my_strncpy(char *s, char*t, int n){
    char *tptr = t;
    char *sptre = s;
    for(int i = 0;i < n; i++){
        *sptre = t[i];
        *sptre++;
    }
    printf("%s\n", s);


}
int main(void){
    char s[] ="";
    char t[] = "ABCDGASDSA";
    int number = 5;
    my_strncpy(s, t, number);
    return 0;
}