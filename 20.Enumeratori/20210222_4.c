/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина. */
#include <stdio.h>
struct date{
    int member1;
    int member2;
    int member3;
}/* contractdate */;
int main(void){/* 
    struct date contractdate = {29, 10, 2019};
    contractdate.member1 = 10;
    contractdate.member2 = 11;
    contractdate.member3 = 1999; */
    struct date contractdate = {.member3 = 1992, .member2 = 2, .member1 = 20};
    printf("Year %d, Month %d, Day %d\n", contractdate.member3, contractdate.member2, contractdate.member1);
    return 0;
}