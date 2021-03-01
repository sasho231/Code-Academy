/* Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и */
#include <stdio.h>

int main(void){
    char cValue = '0';
    short sValue = - (cValue + cValue);
    unsigned short usValue = - (cValue + cValue);
    int iValue = sValue;
    unsigned int uiValue = sValue;
    long lValue = iValue;
    unsigned long ulValue = iValue;
    float fValue = ulValue;
    double dfValue = ulValue; 

    printf("cValue = %c\nsValue = %d\nusValue = %u\niValue = %d\nuiValue = %d\nlValue = %ld\nulValue = %lu\nfValue = %f\ndValue = %lf",\
    cValue, sValue, usValue, iValue, uiValue, lValue, ulValue, fValue, dfValue);

    return 0; 
}