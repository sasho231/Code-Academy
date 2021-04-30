#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *our_strdup(char *s){
    char *dublicat;
    char *t;
    dublicat = (char *)malloc(strlen(s) + 1u);
    if(!dublicat)
        return NULL;
    for(t = dublicat; *s; ){
        *t++ = *s++;
    }
    *t = *s;
    return dublicat;
}
int main(void){
    char *s = "Coding is hard";
    printf("%s\n", our_strdup(s));
    return 0;

}