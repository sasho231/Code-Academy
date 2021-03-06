#include <stdio.h>
#include <string.h>
enum tagEType
{
    VALUE_INT,
    VALUE_STR
};
union tagMyVar
{
    int m_nValue;
    char m_szValue[64];
};
struct tagMyValue
{
    enum tagEType m_type;
    union tagMyVar m_var;
};
void printValue(struct tagMyValue *pValue)
{
    if (VALUE_INT == pValue->m_type)
    {
        printf("INT: %d\n", pValue->m_var.m_nValue);
    }
    else if (VALUE_STR == pValue->m_type)
    {
        printf("STR: %s\n", pValue->m_var.m_szValue);
    }
}
int main(void)
{
    struct tagMyValue value = {VALUE_INT, 15478};
    printValue(&value);
    value.m_type = VALUE_STR;
    strcpy(value.m_var.m_szValue, "asd asd asd");
    printValue(&value);
    return 0;
}