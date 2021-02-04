/* Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
#include <stdio.h>
#include <string.h>
void reverse(char s[]){
    int i =0;
    int j =0;
    int k =0;
    for(i=0, j = strlen(s) - 1; i<j ; i++, j--){
        k = s[j];
        s[j] = s[i];
        s[i] = k;
    }
    printf("The reversed string is: %s\n", s);
}
int main(void){
    char s[] = "Coding";
    reverse(s);
    return 0;

} 