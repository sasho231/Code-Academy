/* Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура. */
#include <stdio.h>
#include <string.h>
enum choice{
    value_int,
    value_str
};
union test{
    int number;
    char string[20];
};
struct wtf{
    enum choice type;
    union test val;
};
void getprint(struct wtf *isgoingon){
    if(value_int == isgoingon->type){
        printf("int: %d\n", isgoingon->val.number);
    }
    else if(value_str == isgoingon->type){
        printf("str: %s\n", isgoingon->val.string);
    }
}
int main(void){
    struct wtf isgoing = {value_int, 69};
    getprint(&isgoing);
    isgoing.type = value_str;
    strcpy(isgoing.val.string, "ayaya");
    getprint(&isgoing);
    return 0;
}