#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int sum=0;
    while(a <= b){
        sum = sum + a;
        a++;
    }
    printf("%d\n", sum);
    return 0;
}