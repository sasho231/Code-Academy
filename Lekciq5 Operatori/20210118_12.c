#include <stdio.h>
int main(){
    int nX;
    printf("nX =");
    scanf("%d", &nX);
    int nY = 20;
    if (nX == nY){
        printf("%d and %d are equal\n", nX, nY);
    }
    else{
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY){
        printf("%d is greate than %d\n", nX, nY);
    }
    else{
        printf("%d is greather than %d\n", nY, nX);
    }
    return 0;
}