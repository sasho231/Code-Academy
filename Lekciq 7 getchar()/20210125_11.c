#include <stdio.h>
#include <string.h>
void reverse(char s[]);
int main(void){
    char s[] = "";
    printf("Vavedete tekst: ");
    scanf("%s", &s);
    
    reverse(s);
    return 0;
}
void reverse(char s[]){
    int i = 0;
    int j = 0;
    int k = 0;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
        k = s[j];
        s[j] = s[i];
        s[i] = k;
    }
    printf("Reversed: %s\n", s);
    
   
}