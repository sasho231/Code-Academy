#include <stdio.h>
#pragma pack(1) /*== __atribute() paketira strukturi */
union tagMyData
{
    int m_nValue;
    float m_fval;
    char m_sztext[25];
};
int main(void)
{
    union tagMyData data = {13};
    printf("Memory size : sizeof(data): %d\n", sizeof(data));
    printf("nValue= %d , fvalue = %f , text: %s\n", data.m_nValue, data.m_fval, data.m_sztext);
    return 0;
}