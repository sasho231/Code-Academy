/* Указатели към структура, предаване на структура на функция по
стойност и по референция */
#include <stdio.h>
#include "struct.h"
#include <string.h>
void printPaper(struct TagPaper paper){
    printf("Paper id: %d\n", paper.m_nBookID);
    printf("Paper title: %s\n", paper.m_szTitle);
    printf("Paper author: %s\n", paper.m_szAuthor);
    printf("Paper subject: %s\n", paper.m_szSubject);
}
void printPaperPTR(struct TagPaper* Ppaper){
    printf("Paper id: %d\n", Ppaper->m_nBookID);
    printf("Paper title: %s\n", Ppaper->m_szTitle);
    printf("Paper author: %s\n", Ppaper->m_szAuthor);
    printf("Paper subject: %s\n", Ppaper->m_szSubject);

}
int main(void){
    struct TagPaper paper = {123, "Book123", "Kosta", "Hacking"};
    printPaper(paper);
    struct TagPaper Ppaper = {102, "ASDER", "MASD", "cheat"};
    printPaperPTR(&Ppaper);

    return 0;
}