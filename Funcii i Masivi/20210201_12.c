/* Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)
 */
#include <stdio.h>
int any(char s1[], char s2[]){
    int i =0;
    int j =0;
    for(i=0, j =0; s1[i] != '\0', s2[j] != '\0'; i++, j++){
        if(s1[i] == s2[j]){
            printf("The first matching element is: %c\n", s1[i]);
            break;
        }
        continue;
        
    }
}
int main(void){
    char s1[] = "coding";
    char s2[] = "padoklsg";
    any(s1, s2);
    return 0;

}