/* Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения. */
#include <stdio.h>
#include <stdlib.h>
double my_pow(int base, int power);
int main(void){
    int x, y;
    double num;
    printf("Enter base x: ");
    scanf("%d", &x);
    printf("Enter power y: ");
    scanf("%d", &y);

    if(y < 0){
        num = 1 / my_pow(x, y);
    }
    else{
        num = my_pow(x, y);
    }
    printf("%f\n", num);
    return 0;

}
double my_pow(int base, int power){
    power = abs(power);
    if(power>0){
        return base * my_pow(base, power - 1);
    }
    else 
        return 1;


}
