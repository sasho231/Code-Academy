/* Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */
#include <stdio.h>
#include <string.h>
int strend(char *s, char *t);
int main(void){
    char *s = "Coding";
    char *t = "ng";
    printf("%d\n", strend(s, t));    
    return 0;
}
int strend(char *s, char *t){
    int l = strlen(s) - strlen(t);
    s = s + l;
    int d = strcmp(s, t);
    if(d==0)
        return 1;
    else
        return 0;
}