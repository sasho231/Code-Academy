#include <stdio.h>
#include <string.h>
#define ALLOCSIZE 10000
static char allocbuff[ALLOCSIZE];
static char *allocp = allocbuff;

char *alloc(int n){
    if(allocbuff + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    }
    else{
        return 0;
    }
}
char afree(char *p){
    if(p>=allocbuff && p < allocbuff + ALLOCSIZE)
        allocp = p;
}
char *our_strdup(char *s){
    char *dups, *t;
    dups = alloc(strlen(s) + 1);
    if(!dups)
        return NULL;
    for(t=dups; *s; )
        *t++=*s++;
    *t = *s;
    return dups;
}
int main(void){
    char *sdup;
    char str[] = "sasho`s dup";
    sdup = our_strdup(str);
    if(!sdup){
        printf("Out of memory");
        return 1;
    }
    printf("%s\n", sdup);
    afree(sdup);
    return 0;
}