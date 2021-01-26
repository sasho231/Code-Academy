#include <stdio.h>
int main(void){
    char s;
    int counter = 0;
    while((s = getchar()) != EOF){
        counter++;
        if (counter > 80){
            putchar(s);
        }
    }

    return 0;
}