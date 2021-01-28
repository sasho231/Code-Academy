#include <stdio.h>
#include <string.h>
void itob();
int main(void){
    int n;
    int b;
    char s[64]="";
    printf("Enter a whole number: ");
    scanf("%d", &n);
    printf("\nEnter a base for conversion: ");
    scanf("%d", &b);
    printf("\n%d (10) -> ", n); 
    if (n>0){
    goto print;
    }
    else if (n<0){
        /* Правило за втората комплимента - ако числото е отрицателно го обръщаме към положително, за да го добавим към негативното число така 
        формираме максималната стойност
        след това обръщаме битовете (0 -> 1) и накрая добавяме 1. */
        if (b == 2 || b == 8 || b == 16){
        n=-n;
        n = __INT_MAX__ - n + 1;
        goto print; 
        }
        else {
            n=-n;
            printf("-");
            goto print;
        }
    }
    print:
    itob(n,s,b);       
    printf("%s",strrev(s));
    printf(" (%d)\n", b);
    
 }
 void itob(int n,char s[],int b){
     int i=0;
     int c=0;
     char m[64]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
     do{
       i=n%b;
       n/=b;
       s[c]=m[i];
       c++;
    }    
    while(n>0);
   
 }