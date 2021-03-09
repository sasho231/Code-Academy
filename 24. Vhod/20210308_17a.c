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
void getsorted(person *ptr, int choice)
{
    char *tempPointer = NULL;
    int tempNumber, i, j;
    for (i = 0; i < choice + 1; i++)
    {
        for (j = i + 1; j < choice; j++)
        {
            if (strncmp(ptr[i].name, ptr[j].name, 1) > 0)
            {
                tempPointer = ptr[j].name;
                ptr[j].name = ptr[i].name;
                ptr[i].name = tempPointer;

                tempPointer = ptr[j].surname;
                ptr[j].surname = ptr[i].surname;
                ptr[i].surname = tempPointer;

                tempNumber = ptr[j].serialNumber;
                ptr[j].serialNumber = ptr[i].serialNumber;
                ptr[i].serialNumber = tempNumber;

                tempNumber = ptr[j].age;
                ptr[j].age = ptr[i].age;
                ptr[i].age = tempNumber;
            }
        }
    }
}
int main(void)
{
    int choice = 0;
    printf("How many participants would you want to enter?\n");
    scanf("%d", &choice);
    person *ptr;
    ptr = (person *)malloc(choice * sizeof(person));
    getsorted(ptr, choice);
    free(ptr->name);
    free(ptr->surname);
    free(ptr);
    return 0;
}