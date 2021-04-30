/* Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата. */
#include <stdio.h>
extern int g_date[][13];
struct date{
    int day : 8;
    int month :8;
    int year : 12;
};
int yearcheck(struct date wtf){
    if(wtf.year % 400 == 0){
        return 1;
    }
    else if(wtf.year % 100 == 0){
        return 0;
    }
    else if(wtf.year % 4 ==0){
        return 1;
    }
    else
        return 0;
}
int validation(struct date wtf){
    if(wtf.day > g_date[0][wtf.month] || wtf.day < 1){
        return 0;
    }
    else
        return 1;
}
void printdate(struct date wtf){
    if(validation(wtf)){
        printf("Day: %d Month: %d Year %d\n", wtf.day, wtf.month, wtf.year);
    }
    else
        printf("Invalid input");
}

int main(void){
    struct date val = {25,10, 1991};
    printdate(val);
    return 0;
}
int g_date[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
