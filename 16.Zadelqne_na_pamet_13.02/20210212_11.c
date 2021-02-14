/* Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
int number[MAX];
char *first_name[MAX], fname[15];
char *last_name[MAX], lname[15];
int age[MAX];
int main(void){
    int total_participants = 1;
    int index = 0;
    int choice = 0;
    while(1){
        printf("Enter number: ");
        scanf("%d", &number[index]);

        printf("Enter first name: ");
        scanf("%s", &fname);
        first_name[index] = (char*)malloc(strlen(fname) + 1);
        strcpy(first_name[index], fname);

        printf("Enter last name: ");
        scanf("%s", &lname);
        last_name[index] = (char*)malloc(strlen(lname)+1);
        strcpy(last_name[index], lname);

        printf("Enter age: ");
        scanf("%d", &age[index]);
        printf("If you want to enter another participant press 1. To quit press 2.\n");
        scanf("%d", &choice);
        if(choice != 1 || index == MAX)
            break;
        
        index++;
    }
    total_participants += index;
    for(index = 0; index < total_participants; index++){
        printf("%d. %s %s number: %d age: %d .\n", index+1, first_name[index], last_name[index], number[index], age[index]);
        free(first_name[index]);
        free(last_name[index]);
    }
    return 0;
}
