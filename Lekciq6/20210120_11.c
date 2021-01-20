#include <stdio.h>
int main(){
    char symbol;
    scanf("%c", &symbol);
    switch(symbol){
        case 'a':
        printf("Symbol is %c \n", symbol);
        break;
        case 'b':
        printf("Symbol is %c \n", symbol);
        break;
        default:
        printf("default\n");

    }
    return 0;
}