#include <stdio.h>
#include <string.h>
/* Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */
int strend(char *s, char *t){
    int lenght = strlen(s) - strlen(t);
    s = s + lenght;
    int result = strcmp(s, t);
    if(result == 0)
        return 1;
    else
        return 0;

}
int main(void){
    char *s = "coding";
    char *t = "dsag";
    printf("%d\n", strend(s, t));
    return 0;

}
