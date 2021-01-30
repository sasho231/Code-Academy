/* Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него. */
#include "func.h"
int main(){
    float a = 0;
    float b = 0;
    int c = 0;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("NOK is : %d\n",(lcmNaive(abs(a), abs(b))));
    printf("Abs of a is: %.2f\n",getAbs(a));
    printf("c = ");
    scanf("%d", &c);
    getSqrt(c);

    
    

}
int lcmNaive(int a, int b){   
    for (int i = ((a > b)? a : b); i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }  
}
float getAbs(float a){
    if(a < 0)
    return -a;
    else{
        return a;
    }
}
int getSqrt(int c){
    double sqrtRoot = sqrt(c);
    if (c < 0){
        if(sqrtRoot < 0){
            printf("-1\n");
        }
        getAbs(c);
        sqrtRoot = sqrt(c);
        printf("sqrt(c) = %f\n", sqrtRoot);
    }
    else{
    printf("sqrt(c) = %f", sqrtRoot);
    }
    
    
}