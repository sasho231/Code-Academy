/* 7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината */
#include <stdio.h>
extern int g_arr[12];
extern int g_arr1[12];
void findDay(int year, int month, int day);
int main(void){
    int year = 0,month = 0, day = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter a month in format 1-12: ");
    scanf("%d", &month);
    printf("Enter a day in format 1-31: ");
    scanf("%d", &day);
    findDay(year, month, day);

    return 0;
}
void findDay(int year, int month, int day){
    int sum = 0, i = 0;
    if(year % 4 == 0 && year % 100 != 0){
        for(i = 0; i < month-1; i ++){
            sum += g_arr1[i];
        }
        printf("%d-th day of the year.\n", sum + day);
    }
    else{
        for(i = 0; i < month-1; i++){
            sum += g_arr[i];
        }
        printf("%d-th day of the year.\n", sum + day);
    }
}






int g_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int g_arr1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};