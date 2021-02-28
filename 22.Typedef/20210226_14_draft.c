/* Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int serialNumber;
    int age;
    char *name;
    char *surname;
}person;
void fillArr(person *ptr, int choice);
void printArr(person* ptr, int choice);
int main(void){
    int choice=0;
    printf("How many participants would you want to enter?\n");
    scanf("%d", &choice);
    person *ptr;
    ptr = (person*)malloc(choice * sizeof(person));
    fillArr(ptr, choice);
    printArr(ptr, choice);
    free(ptr);
    return 0;
}
void fillArr(person *ptr, int choice){
    int i = 0;
    for(i=0; i < choice; i++){

        printf("Participant[%d]\n", i + 1);
        printf("Enter serial Number: \n");
        scanf("%d", &(ptr + i)->serialNumber);
        printf("Enter first name. \n");
        ptr[i].name =(char*)malloc(220);
        scanf("%s", &ptr[i].name);
        printf("Enter second name. \n");
        ptr[i].surname = (char*)malloc(220);
        scanf("%s", &ptr[i].surname);
        printf("Enter age of participant. \n");
        scanf("%d", &(ptr + i)->age);
    }
}
void printArr(person* ptr, int choice){
    int i = 0;
    for(i=0; i < choice; i++){
        printf("Participant[%d] with serial number %d, name: %s %s , age %d .\n", i+1, (ptr+i)->serialNumber, ptr[i].name, ptr[i].surname, (ptr+i)->age);
    }
}