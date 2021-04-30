/* Инициализиране на структура, вложени структури */
#include <stdio.h>
#include <string.h>
#define SIZE 100
struct tagDetail{
    unsigned int m_uAcadID;
    char m_szAcadName[SIZE];
    char m_szAcadUrl[SIZE];
};
struct tagCadet{
    unsigned int m_uCadetID;
    char m_CadetName[SIZE];
    float m_uAverageRating;
    struct tagDetail m_detail;
};
int main(void){
    struct tagCadet cadet1 = {102, "Ivan", 5.51, {123, "TU SOFIA", "TU-SOFIA.BG"}};
    printf("Cadet id: %d\n", cadet1.m_uCadetID);
    printf("Name is: %s\n", cadet1.m_CadetName);
    printf("Rating is: %.2f\n", cadet1.m_uAverageRating);
    printf("Academy id: %d\n", cadet1.m_detail.m_uAcadID);
    printf("Academy name: %s\n", cadet1.m_detail.m_szAcadName);
    printf("Academy url: %s\n", cadet1.m_detail.m_szAcadUrl);
    return 0;
}