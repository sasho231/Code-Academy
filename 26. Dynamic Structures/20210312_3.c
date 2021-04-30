/* Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct node_t node_t;

typedef struct node_t{
    int value;
    node_t* next_value;
}node_t;


node_t* start;

void init(){
    start = NULL;
}


int add(int number){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if(!start) return -1;
    start->value = number;
    start->next_value = p;
    return 0;
}
int GetNth(node_t* head, int index)
{
 
    node_t* current = start;
 
    // the index of the
    // node we're currently
    // looking at
    int count = 0;
    while (current != NULL) {
        if (count == index)
            return (current->value);
        count++;
        current = current->next_value;
    }
 
    /* if we get to this line,
       the caller was asking
       for a non-existent element
       so we assert fail */
    assert(0);
}


void print_list(){
    node_t* p = start;
    while(p != NULL){
        printf("%d ", p->value);
        p = p->next_value;
    }
}

int main(void){
    int i = 0;
    init();
    for(i=1; i < 15; i++){
        add(i);
    }
    print_list();
    printf("\nThe fifht element of the end is %d\n", GetNth(start, 4));
    return 0;


}