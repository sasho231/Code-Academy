#include <stdio.h>
int main(void){
    char c = 0;
    
    int counter = 0;
    int counter1 = 0;
    int counter2 = 0;
    while((c = getchar()) != EOF){
        if (c == '\n'){
            counter++;
        }
        else if (c == ' '){
            counter1++;
        }
        else if (c == '\t') counter2++; // tabulacii tab
        
    }
    printf("New lines are: %d\n", counter);
    printf("Shpaciite sa : %d\n", counter1);
    printf("Tabulaciite sa : %d\n", counter2);
    return 0;
}
