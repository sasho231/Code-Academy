#include <stdio.h>
int main(void){
    int result = 0;
    while(result != 4){
        printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\n");
        scanf("%d", &result);
        switch(result){
            case 1:
                printf("Hello world\n");
                break;
            case 2:
                printf("Marry had a little lamb\nits fleece was white as snow\nAnd everywhere that Mary went\n"
                "The lamb was sure to go .\n");
                break;
            case 3:
                printf("42\n");
                break;
            default:
                printf("Press 1, 2, 3 or 4\n");
                break;
        }
    }
    return 0;
}