/* Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */
#include <stdio.h>
void our_strcat(char*, char*);
int main(void){
    char s[30] = "Hello";
    char *t = " world!";
    our_strcat(s, t);
    printf("%s\n", s);
    return 0;

}
void our_strcat(char *s, char *t){
    /* char *sPtr = s;
    char *tPtr = t;
    for(; *sPtr; *sPtr++);
    for(; *t; t++){
        *sPtr = *t;
        *sPtr++;
    } 
    printf("%s\n", s);*/
    /* char *p = s;
    while(*p){
        *p++;}
    while(*t){
        *p++ = *t++;
    } */
    while(*s++)
    ;
    --s;
    while((*s++ = *t++))
    ;

    
}