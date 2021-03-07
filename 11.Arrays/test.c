/* Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */
#include <stdio.h>
void my_strncat(char *s, char *t, int n){
    int i = 0;
    char *sptr = s;
    for(;*sptr; *sptr++);
    for(i = 0; i < n; i++){
        *sptr = t[i];
        *sptr++;
    }
    printf("%s\n", s);

}
int main(void){
    char s[30] = "kopelence";
    char t[] = " golqmoprase";
    int number = 7;
    my_strncat(s, t, number);
    return 0;
}