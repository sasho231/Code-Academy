#include <stdio.h>
int isLetter(char c);
int main(void){
    char c;
    printf("c=");
    scanf("%d", &c);
    isLetter(c);
    return 0;

}
int isLetter(char c){
    if ((64 < c && c < 91) || (96 < c && c < 123)){
        printf("C e bukva ot ASC|| tablicata\n");}
    else{
        printf("C ne e bukva ot ASC|| tablicata\n");}


}