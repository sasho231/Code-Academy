#include <stdio.h>
int main(void){
    int result;
    printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\n");
    scanf("%d", &result);
    if (result == 1){
        printf("Hello\n");
    }
    else if (result == 2){
        printf("Poem\n");
    }
    else{
        printf("Hidden message\n");
    }
    return 0;
}