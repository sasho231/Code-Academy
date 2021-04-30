/* Дефиниране на структура, достъп до членове */

#include <stdio.h>
#include "struct.h"
#include <string.h>
int main(void){
    struct TagPaper stPaper = {192, "Coding book", "Metodi", "C sharp"};
    printf("Paper id: %d\n", stPaper.m_nBookID);
    printf("Papper Title: %s\n", stPaper.m_szTitle);
    printf("Paper author: %s\n", stPaper.m_szAuthor);
    printf("Paper subject: %s\n", stPaper.m_szSubject);
    strcpy(stPaper.m_szSubject, "C++");
    printf("Paper subject %s\n", stPaper.m_szSubject);
    stPaper.m_nBookID = 10234;
    printf("Paper ID: %d\n", stPaper.m_nBookID);
    return 0;
}