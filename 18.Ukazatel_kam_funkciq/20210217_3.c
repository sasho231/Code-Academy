/* Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.
 */
#include <stdio.h>
#include <stdlib.h>
int getplus(int a, int b){return a + b;}
int getminus(int a, int b){return a - b;}
int getumnojenie(int a, int b){return a*b;}
int getdivide(int a, int b){return a / b;}
int (*func_ptr[4])() = {getplus, getminus, getumnojenie, getdivide};
int main(void){
    int a = 0,b=0;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    int choice = 0;
    printf("For + press 0, for - press 1,for * press 2, for / press 3 !\n");
    scanf("%d", &choice);
    switch(choice){
        case 0:
        printf("%d\n", (*func_ptr[choice])(a, b));
        break;
        case 1:
        printf("%d\n", (*func_ptr[choice])(a,b));
        break;
        case 2:
        printf("%d\n", (*func_ptr[choice])(a,b));
        break;
        case 3:
        printf("%d\n", (*func_ptr[choice])(a,b));
        break;
        }
    
    return 0;
}