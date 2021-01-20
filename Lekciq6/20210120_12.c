#include <stdio.h>
int main(){
    char str[10] = "coding";
    switch(str[0]){
        case 'c':
        switch(str[1]){
            case 'x':
            printf("not\n");
            break;
            case 'o':
            printf("yes\n");
            break;
            default:
            printf("not in the book");
            
        }
        break;
        case 'b':
        printf("its b");
        break;
        default:
        printf("default");

    }

    return 0;
}