/* Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск. */
#include <stdio.h>
#include <stdlib.h>
int check_anagram(char [], char []);
int main(void){
    char a[1000], b[1000];
    printf("Enter two strings. \n");
    gets(a);
    gets(b);
    if(check_anagram(a, b))
        printf("The strings are anagrams. \n");
    else
        printf("The strings are not anagrams.\n");
    
    return 0;

}
int check_anagram(char s[], char t[]){
    int first[26] = {0}, second[26] = {0};
    int i = 0;
    while(s[i] != '\0'){
        first[s[i] - 'a']++;
        i++;
    }
    i = 0;
    while(t[i] != '\0'){
        second[t[i] - 'a']++;
        i++;
    }
    for(i=0; i < 26; i++){
        if(first[i] != second[i])
            return 0;
    }
    return 1;
}