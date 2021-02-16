/* Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.
 */
#define MAX 50
#include <stdio.h>
void my_strcpy(char *strfrom , char *strto);
void strcpyy(char *strfrom, char *strto,  char*strfrom1, char *strto2);
int main(void){
    char string[] = "A string to be copied.";
    char string1[] = "I am very good in strings coping!";
    char scpy[MAX] = "";
    char scpy1[MAX] = "";
    strcpyy(string, scpy,string1, scpy1);
    printf("%s\n%s\n", scpy, scpy1);
    my_strcpy(string, scpy1);
    printf("%s\n", scpy1);
    return 0;

}
void strcpyy(char *strfrom, char *strto, char*strfrom1, char *strto2){
    /* for(; *strfrom; strfrom++){
        *strto = *strfrom;
        strto++;
    } */
    while(*strfrom != '\0'){
        *strto = *strfrom;
        strto++;
        strfrom++;
    }
    *strto = '\0';
    while(*strfrom1 != '\0'){
        *strto2 = *strfrom1;
        strto2++;
        strfrom1++;
    }
    *strto2 = '\0';
}
void my_strcpy(char *strfrom , char *strto){
    for(;*strfrom; strfrom++){
        *strto = *strfrom;
        strto++;
    }
    *strto = '\0';
}