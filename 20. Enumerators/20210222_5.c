/* Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор. */
#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int main(void){
    struct date array[10];
    int i =0;
    for(i=0; i < 10; i++){
        printf("Enter value for array[%d] day: ", i);
        scanf("%d", &array[i].day);
    }
    for(i=0; i < 10; i++){
        printf("Days are %d\n", array[i].day);
    }
    return 0;
}