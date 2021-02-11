/* Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I? */

#include <stdio.h>
#include <string.h>
int isPalindrome(char s[]){
    int i =0;
    int l = strlen(s);
    int counter = 0;
    for(i=0; i < l/2; i++){
        if(s[i] == s[l-i-1])
            counter++;
    }
    if(counter == i)
        return 1;
    else
        return 0;

}
int main(void){
    char s[200];
    char c;
    int i = 0;
    printf("Enter a text: ");
    while((c = getchar()) != '\n'){
        s[i] = c;
        i++;
    }
    if(isPalindrome(s))
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    
    return 0;
}