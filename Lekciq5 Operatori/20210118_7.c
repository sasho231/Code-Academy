#include <stdio.h>
int main(void){
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    printf("Vavedete nova stoinost za nA = ");
    scanf("%d", &nA);
    int max = nA > nB ? nA : nB;
    printf("Po- golqmoto chislo e %d\n", max);
    return 0;

}