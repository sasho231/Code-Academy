/* Използвайте динамична реализация на стек за въвеждане на поредица
от цели положителни числа и нейното извеждане върху екрана в
обратен ред. За край на поредицата от клавиатурата се въвежда 0 */

#include <stdio.h>
#include <stdlib.h>
typedef struct node_t node_t;
typedef struct node_t{
    int data;
    node_t *next;
}node_t;

node_t *start = NULL;

int push(int n){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if(!start) return -1;
    start->data = n;
    start->next = p;
    return 0;
}

int pop(int *n){
    node_t *p = start;
    if(start){
        *n = start->data;
        start = start->next;
        free(p);
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int n = 1;
    while(n){
        printf("Enter number: \n");
        scanf("%d", &n);
        push(n);
    }
    while(pop(&n)){
        printf("%d", n);
    }

    return 0;
}