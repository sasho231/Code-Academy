#include <stdio.h>
int main(int argc, char *argv[]){
    for(; *argv; argv++)
        printf("%s", *argv);
    printf("\n");
    return 0;
}