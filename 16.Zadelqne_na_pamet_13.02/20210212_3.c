/* Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */
#include <stdio.h>
#include <stdlib.h>
void fillArray(int *p, int number){
    int i = 0;
    for(i=0; i < number; i ++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", (p + i));
    }
    printf("Elements are: ");
    for(i = 0; i < number; i++){
        printf("%d ", *(p + i));
    }  
}
int main(void){
    int number;
    int *p = NULL;
    p = (int*)malloc(number * sizeof(int));
    if(!p) printf("Not enough memory.\n");
    int choice=0;
    printf("How many numbers do you want? ");
    scanf("%d", &number);
    fillArray(p, number);
    printf("\nIf you want to fill another array press 1, to quit press 2.\n");
    scanf("%d", &choice);
    while(choice != 2){     
        printf("How many numbers do you want? ");
        scanf("%d", &number);
        p = (int*)realloc(p, number * sizeof(int));
        if(!p) printf("Not enough memory.\n");
        fillArray(p, number);  
        printf("\nIf you want to fill another array press 1, to quit press 2.\n");
        scanf("%d", &choice);
    }
    free(p);
    return 0;
}