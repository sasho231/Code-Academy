/*  Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“
 */
#include <stdio.h>
#include <string.h>
int main(void){
    char s[] = "Baba, kaka, mama";
    int lenght = strlen(s);
    int i = 0;
    for(i=0; i < lenght; i++){
        if(s[i] == 'a')
            s[i] = 'o';
    }
    printf("%s\n", s);
    return 0;
}