/* Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред. */
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#define MAX 50
int number[MAX];
int age[MAX];
char *first_name[MAX], fname[15];
char *last_name[MAX], lname[15];
void getSorted(int total_participants);
int main(void){
    int index = 0;
    int choice = 0;
    int total_participants = 0;

    while(1){
        printf("Enter number of participant: ");
        scanf("%d", &number[index]);
        printf("Enter first name: ");
        scanf("%s", &fname);
        first_name[index] = (char*)malloc(strlen(fname) + 1);
        strcpy(first_name[index], fname);
        printf("Enter last name: ");
        scanf("%s", &lname);
        last_name[index] = (char*)malloc(strlen(lname) + 1);
        strcpy(last_name[index], lname);
        printf("Enter age:");
        scanf("%d", &age[index]);

        printf("Do you want to enter another participants. If yes press 1, else press 2.\n");
        scanf("%d", &choice);
        if(choice != 1 || index == MAX) break;
        index++;
    }
    int i = 0;
    total_participants = index + 1;
    getSorted(total_participants);
    for(i=0; i < index + 1; i++){
        printf("%d. %s %s number: %d age: %d .\n", i+1, first_name[i], last_name[i], number[i], age[i]);
        free(first_name[i]);
        free(last_name[i]);    
    }
    return 0;

}
void getSorted(int total_participants){
    char *tempPointer = NULL;
    int tempNumber, i , j;
    for(i=0; i < total_participants - 1; i++){
        for(j=i+1; j < total_participants; j++){
            if(strncmp(first_name[i], first_name[j], 1) > 0){
                tempPointer = first_name[j];
                first_name[j] = first_name[i];
                first_name[i] = tempPointer;

                tempPointer = last_name[j];
                last_name[j] = last_name[i];
                last_name[i] = tempPointer;

                tempNumber = number[j];
                number[j] = number[i];
                number[i] = tempNumber;

                tempNumber = age[j];
                age[j] = age[i];
                age[i] = tempNumber;
            }
        }
    }
}