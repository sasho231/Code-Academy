/* Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” */

#include <stdio.h>
#define MY_PRINT(...) printf("TRACE: " __VA_ARGS__)
int main(void){
    MY_PRINT("My favourite numbers are: %d, %d, %d\n", 9, 10, 15);
    return 0;
}