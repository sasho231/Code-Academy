/* Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив. */
#include <stdio.h>
#include <string.h>
const char m[] = "0123456789";
int atoi(char *s);
void itoa(int, char*);
float atof(char*);
void reverse(char *q);
int main(void){
    char *s = "10223";
    int number = 123;
    char c[] = "";
    char b[] ="10.234";
    char q[] = "HARDCODING";
    printf("%d\n", atoi(s));
    itoa(number, c);
    printf("%f\n", atof(s));
    reverse(q);
    printf("%s\n", q);

    return 0;
}
int atoi(char *s){
    int result = 0;
    for(; *s; s++){
        result = result * 10 + *s - '0';
        }
    return result;
}
void itoa(int number, char *c){
    int i = 0;
    int j = 0;
    do{
        i = number % 10;
        number = number / 10;
        c[j] = m[i];
        j++;
    }
    while(number > 0);
    printf("%s\n", strrev(c));
}
float atof(char *b){
    float rez = 0, power = 1;
    int point_seen = 0;
    for(; *b; b++){
        if(*b == '.'){
            point_seen = 1;
            continue;
        }
        int d = *b - '0';
        if(d>= 0 && d<=9){
            if(point_seen) power *= 10.0;
            rez = rez * 10.0 + (float)d;
        }
    }
    return rez / power;
}
void reverse(char *q){
    int i = 0;
    int l = strlen(q);
    char *beginptr, *endptr, ch;
    beginptr = q;
    endptr = q;
    for(i=0;i<l-1;i++) /*move to last char*/
        endptr++;
    for(i=0; i < l/2; i++){
        ch = *endptr; /* swap chars*/
        *endptr = *beginptr;
        *beginptr = ch;
        beginptr++;
        endptr--; /*update ptr positions*/
    }
}