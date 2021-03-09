/* Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват масиви
с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int serialNumber;
    int age;
    char *name;
    char *surname;
    char fname[64];
    char lname[64];
} person;
void fillArr(person *ptr, int choice);
void printArr(person *ptr, int choice);
int main(void)
{
    int choice = 0;
    printf("How many participants would you want to enter?\n");
    scanf("%d", &choice);
    person *ptr;
    ptr = (person *)malloc(choice * sizeof(person));
    fillArr(ptr, choice);
    printArr(ptr, choice);
    free(ptr->name);
    free(ptr->surname);
    free(ptr);
    return 0;
}
void fillArr(person *ptr, int choice)
{
    int i = 0;
    for (i = 0; i < choice; i++)
    {

        printf("Participant[%d]\n", i + 1);
        printf("Enter serial Number: \n");
        scanf("%d", &(ptr + i)->serialNumber);
        printf("Enter first name. \n");
        scanf("%s", &(ptr + i)->fname);
        ptr[i].name = (char *)malloc(strlen((ptr + i)->fname) + 1);
        strcpy(ptr[i].name, ptr[i].fname);
        printf("Enter second name. \n");
        scanf("%s", &(ptr + i)->lname);
        ptr[i].surname = (char *)malloc(strlen((ptr + i)->lname) + 1);
        strcpy(ptr[i].surname, ptr[i].lname);
        printf("Enter age of participant. \n");
        scanf("%d", &(ptr + i)->age);
    }
}
void printArr(person *ptr, int choice)
{
    int i = 0;
    for (i = 0; i < choice; i++)
    {
        printf("Participant[%d] with serial number %d, name: %s %s , age %d .\n", i + 1, (ptr + i)->serialNumber, ptr[i].name, ptr[i].surname, (ptr + i)->age);
    }
}