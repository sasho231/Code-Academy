#include <stdio.h>
int main(void){
    char c = 0;
    int flag = 1;
    while((c = getchar()) != EOF){
        if (c == ' '){
            if(flag == 1 && c == ' '){
                continue;
            }
            flag = 1;
        }
        else{
            flag = 0;
        }
        putchar(c);
        if (c == '('){
            putchar(')');
        }
    }
    return 0;

}