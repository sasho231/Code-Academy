/* Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void my_strcpy(char *from, char *to);
int main(void){
    char string[] = "Hello pichove!";
    int lenght = strlen(string) - 1 ;
    char *sptr = NULL;
    sptr = &string[lenght];
    char empty[lenght];
    char *ptr = NULL;
    ptr = &empty[lenght];
    my_strcpy(sptr, ptr);
    printf("%s\n", empty);
    return 0;
}
void my_strcpy(char *from, char *to){
    /*if(strlen(from) > strlen(to))
        to = (char*)realloc(to, strlen(from) + 1); */
    while(*to-- = *from--);
    *to = '\0';
    /* free(to); */
}