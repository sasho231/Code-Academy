/* Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0 */
#include <stdio.h>
int our_strcmp(char *s, char *t);
int main(void){
    char *a = "coDing";
    char *pesho = "coDinsG";
    printf("%d\n", our_strcmp(a, pesho));
    return 0;
}
int our_strcmp(char *s, char *t){
    for(; *s == *t; s++, t++){
        if(*s == '\0')
            return 0;
    }
    return *s - *t;   
}