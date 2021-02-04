/* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
 */
#include <stdio.h>
#include <string.h>
const char m[64]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
void reverse(char s[]){
    int i =0;
    int j =0;
    int k =0;
    for(i=0, j = strlen(s) - 1; i<j ; i++, j--){
        k = s[j];
        s[j] = s[i];
        s[i] = k;
    }
}
void itob(int n, char s[], int b){
    int i = 0;
    int c = 0;
    if(n<0) n = -n;
    do{
        i = n % b;
        n = n / b;
        s[c] = m [i];
        c++;
    }
    while(n>0);

}
int main(void){
    int n = 0;
    char s[64];
    int b = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a base for conversion: ");
    scanf("%d", &b);
    itob(n, s, b);
    reverse(s);
    printf("%d(10) -> %s(%d)", n, s, b);
    return 0;
}
