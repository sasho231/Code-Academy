/* Моделиране на играта “Броеница”: N деца застават в кръг и получават номера от 
1 до N. Като се започне от дете 1, по часовниковата стрелка се отброяват М деца. 
Дете с номер М излиза от кръга, след което започва ново броене от следващото 
дете. Продължава, докато остане само едно дете, чийто номер трябва да се 
определи. Използвайте списък, на който края да сочи към началото вместо към 
NULL. Така се получава кръгов списък и от него вадим членове докато не остане 
един, който печели */


#include "func.h"


int main(void){
    int m=0;
    int n = 0;
    printf("Enter n number kids \n");
    scanf("%d", &n);
    printf("Enter m\n");
    scanf("%d", &m);
    game(m, n);
    return 0;
}