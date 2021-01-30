#include <stdio.h>
/* Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата. */
const float g_pi = 3.14;
float getArea(float r);
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle with radius %f is: %f \n",r,  getArea(r));
    return 0;

}
float getArea(float r){
    return r * r * g_pi;
}