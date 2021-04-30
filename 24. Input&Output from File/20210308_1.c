/* Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf); */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *szBuf = (char *)malloc(64);
    printf("Enter text.\n");
    gets(szBuf);
    printf("You entered: %s\n", szBuf);
    puts(szBuf);
    free(szBuf);
    return 0;
}