/* strcpy */
#include <stdio.h>
void strcpyy(char*, char*);
int main(void){
    char *a = "coding";
    char *p;
    strcpyy(p, a);
    printf("%s\n", p);
    return 0;
}
void strcpyy(char *s, char *t){
    /* while(*s++ = *t++); */
    while((*s = *t) != '\0'){
        s++;
        t++;
    }
}