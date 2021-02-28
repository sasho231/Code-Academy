/* Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.
 */

#include <stdio.h>
#define MAX 2
#include <stdlib.h>
typedef struct{
    int number;
    char first_name[64];
    char middle_name[64];
    char last_name[64];
    char position[64];
    float working_time;
    float salary;
    struct member *boss;
}member;
void fillArray(member *array, member *boss){
    int i = 0;
    for(i=0; i < MAX; i++){
        printf("Member[%d]: \n", i + 1);
        printf("Enter Number: ");
        scanf("%d", &(array + i)->number);
        printf("Enter first name, middle name and last name respectively in format A B C \n");
        scanf("%s %s %s", &(array+i)->first_name, &(array+i)->middle_name, &(array+i)->last_name);
        printf("Enter position working time and salary in format P W S .\n");
        scanf("%s %f %f", &(array+i)->position, &(array+i)->working_time, &(array+i)->salary);
    }
    for(i=0; i < MAX; i++){
        printf("Enter names for boss for employer[%d]: \n", i+1);
        printf("Enter first name, middle name and last name respectively in format A B C \n");
        scanf("%s %s %s", &(boss+i)->first_name, &(boss+i)->middle_name, &(boss+i)->last_name);     
    }
}
void printArray(member *array, member *boss){
    int i=0;
    for(i=0; i < MAX; i++){
        printf("\n");
        printf("Member[%d]: Number: %d \n", i+1, (array+i)->number);
        printf("First name: %s , middle name: %s , and last name: %s .\n", (array+i)->first_name, (array+i)->middle_name, (array+i)->last_name);
        printf("Position: %s ,working time: %.2f years,  salary: %.2f \n", (array+i)->position, (array+i)->working_time, (array+i)->salary);
        printf("His/Her boss: %s %s %s .\n", (boss+i)->first_name, (boss+i)->middle_name, (boss+i)->last_name);
    }
}
int main(void){
    member *array;
    array = (member*)malloc(MAX * sizeof(member));
    member *boss;
    boss = (member*)malloc(MAX * sizeof(boss));

    fillArray(array, boss);
    printf("\n");
    printArray(array, boss);
    free(array);
    free(boss);
    return 0;


}