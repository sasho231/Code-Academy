#include <stdio.h>
union tagUtest
{
    int m_iNum;
    float m_fRate;
    union tagUtest *puniNext;
};
int main(void)
{
    union tagUtest val = {0};
    union tagUtest *pval = &val;
    val.m_iNum = 13;
    pval->m_fRate = 6.76;
    printf("%d\n", sizeof(union tagUtest));
    return 0;
}