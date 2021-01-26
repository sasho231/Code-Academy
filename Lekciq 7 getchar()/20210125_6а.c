#include <stdio.h>
#include <limits.h>
int main(void){
    char c;
    int num_counter = 0;
    int char_counter = 0;
    while((c = getchar()) != EOF){
        
        if(c >= '0' && c <= '9' ){
            num_counter++;
 
        }
        else if(c >= 'a' && c <= 'z')
            char_counter++;
        
    
    }
    printf("Total numbers are: %d\n", num_counter);
    printf("Total characters are: %d", char_counter);
    return 0;
}