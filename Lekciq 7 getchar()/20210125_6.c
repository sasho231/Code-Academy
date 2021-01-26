#include <stdio.h>
#include <limits.h>
int main(void){
    char c;
    int num_counter = 0;
    int char_counter = 0;
    while((c = getchar()) != EOF){
        char_counter++;
        if(c < '0' || c > '9' ){
            continue;
        }
        num_counter++;
        
    
    }
    printf("Total numbers are: %d\n", num_counter);
    printf("Total symbols are: %d", char_counter);
    return 0;
}