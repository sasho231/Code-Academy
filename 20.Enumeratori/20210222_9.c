/* Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum choice{
    value_int,
    value_str
};
union test{
    int number;
    char string[20];
};

void function(enum choice bol, union test *val){
    if(value_int == bol){
        val->number = 103;
        itoa(val->number, val->string, 10);
        printf("%s\n", val->string);
    }
    else if(value_str == bol){
        strcpy(val->string, "12345");
        printf("%d\n", atoi(val->string));     
    }
}
int main(void){
    enum choice bol;
    bol = value_int;
    union test asd;
    function(bol, &asd);
    bol = value_str;
    function(bol, &asd);
}