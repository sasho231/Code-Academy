#include <stdio.h>
int main(){
    int nValue = 0;
    scanf("%d", &nValue);
    int nMod3 = nValue % 3;
    if (nMod3 == 0){
        printf("%d is divided by 3\n", nValue);
    }
    else{
        printf("%d is not divided by 3\n");
    }
    return 0;
}