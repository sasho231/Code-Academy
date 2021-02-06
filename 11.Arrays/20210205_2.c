/* Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията. */
#include <stdio.h>
int size_tmy_strlen(char *s);
int main(void){
    char *s = "Coding is cool";
    printf("%d\n", size_tmy_strlen(s));
    return 0;

}
int size_tmy_strlen(char *s){
    unsigned long size_t = 0;;
    for(;*s != '\0'; s++){
        size_t++;
    }
    return size_t;
}