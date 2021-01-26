#include <stdio.h>
int main(void){
    int c = 0;
    c = getchar();
    int counter = 0;
    while(c != EOF){
        if (c == '\n'){
            counter++;
        }
        c = getchar();
    }
    printf("New lines are: %d\n", counter);
    return 0;
}