#include <stdio.h>
void copy(char *to, char *from){
    int i =0;
    for(i=0; from[i] != '\0'; i++){
        to[i] = from[i];
    }
    printf("%s\n", to);
}
int main(void){
    char *from = "coding";
    char to[16];
    copy(to, from);
    return 0;

}