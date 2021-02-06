#include <stdio.h>
/* Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */
void my_strncat(char *s, char *t, int n){
    char *sptr = s;
    int i = 0;
    for(; *sptr; sptr++);
    for(i = 0; i < n; i++){
        *sptr = t[i];
        *sptr++;
    }
    printf("%s\n", s);

}
int main(void){
    char s[] = "Codi";
    char t[] = "adssa";
    int n = 3;
    my_strncat(s, t, n);
    return 0;
}