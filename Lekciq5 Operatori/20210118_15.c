#include <stdio.h>
int main(){
    int nA;
    printf("nA= ");
    scanf("%d", &nA);
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    int max = (nA > nB ? nA : nB);
    printf("Max = %d\n", max);
    return 0; 
}