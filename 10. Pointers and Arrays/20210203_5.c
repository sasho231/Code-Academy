/* Задача 5. Дефиниране и използване на указател
 */
#include <stdio.h>
int main(){
    int nValue = 13;
    int *nValuePtr = NULL;
    nValuePtr = &nValue;
    printf("nValue = %d , *nValuePtr = %d , nValuePtr(hex) = %0x\n",
    nValue, *nValuePtr, nValuePtr);
    printf("&nvalue = %0x\n", &nValue);
    return 0;
}