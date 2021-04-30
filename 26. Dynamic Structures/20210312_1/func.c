#include "func.h"

t_node *start;

void init(){
    start = NULL;
}

int add(int number){
    t_node *p = start;
    start = (t_node*)malloc(sizeof(t_node));
    if(!start) return -1;
    start->value = number;
    start->next_value = p;
    return 0;
}

void print_list(){
    t_node *q = start;
    while(q != NULL){
        printf("%d ", q->value);
        q = q->next_value;
    }
}

int dell_First(int *number){
    t_node *p = start;
    if(start){
        *number = start->value;
        start = start->next_value;
        free(p);
        return 0;
    }
    else{
        return 1;
    }
}