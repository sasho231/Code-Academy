#include <stdio.h>
int main(){
    char c;
    c = getchar();
   
    int counter = 0;
    while (c != EOF){
        c = getchar();
        counter++;
    }
    printf("%d\n", counter);
    return 0;
    
}

