#include <stdio.h>
int main(void){
    char s = 0;
    while((s = getchar()) != EOF){
        if(s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z'){
            putchar(s);
            
            
        }
        
    }
    return 0;
}