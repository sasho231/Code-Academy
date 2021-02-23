/* Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число. */
#include <stdio.h>
#include <string.h>
enum choice{
    value_int,
    value_str
};
union test{
    int number;
    char string[20];
}__attribute((packed));
void function(enum choice bol, union test *val){
    if(value_int == bol){
        val->number = 152;
        printf("%d\n", val->number);
    }
    if(value_str == bol){
        strcpy(val->string, "Abrakadabra");
        printf("%s\n", val->string);
    }

}
int main(void){ 
    enum choice bol;
    union test val;
    bol = value_str;
    function(bol, &val);
    return 0;
}