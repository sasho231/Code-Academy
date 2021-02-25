/* Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0)); */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define AVG(x,y) (x+y)/2
#define AVGinrange(x,y){int i,result=0,counter=0; for(i=x; i <= y; i++){\
                                                result+=i;counter++;} \
                                                printf("%d\n",result/counter);}

#define pows(x,y) {int result = pow(y,x); printf("%d\n", result);}
#define upthis(a){printf("%c -> %c\n", a, toupper(a));}
#define DISP(f,x)printf(#f "(%g) = %g\n", x, f(x));
                    


int main(void){
    int x = 10;
    int y = 30;
    int result = AVG(x,y);
    printf("%d\n", result);
    AVGinrange(5,10);
    pows(2,5);
    upthis('b');
    DISP(sqrt, 3.0);


    return 0;
}