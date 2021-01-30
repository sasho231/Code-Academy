/* Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата:  */
#include <stdio.h>
const float g_pi = 3.14;
float printArea(void);
float getArea(float r);
int main(){
    printf("Area of circle is: %f", printArea());
    return 0;

}
float printArea(void){
    float r = 0;
    printf("Enter radius: ");
    scanf("%f", &r);
    return getArea(r);
}
float getArea(float r){
    float area = 0;
    area = r * r * g_pi;
    return area;
}
