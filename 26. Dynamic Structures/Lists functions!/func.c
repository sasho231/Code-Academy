#include "func.h"


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

void printList(){
    node_t *p = start;
    while(p != NULL){
        printf("%d ", p->value);
        p = p->next_value;
    }
}
/* dobavq element sled drug element k */
int addElementAfter(int element, int k){
    node_t *q;
    node_t *p = start;
    while(p->value != k){
        p = p->next_value;
    }
    q = (node_t*)malloc(sizeof(node_t));
    q->value = element;
    q->next_value = p->next_value;
    p->next_value = q;
}
/*dobavq element predi drug k */
int addElementBefore(int element, int k){
    node_t *p = start;
    node_t *q;
    q = (node_t*)malloc(sizeof(node_t));
    while(p->value != k){
        p = p->next_value;
    }
    q->next_value = p->next_value;
    q->value = p->value;
    p->next_value=q;
    p->value = element;
    return 0;
}

/* dobavq na element v kraq na spisuka */

int addElementEnd(int element){
    node_t *p = start;
    node_t *q;
    q = (node_t*)malloc(sizeof(node_t));
    while(p->next_value != NULL){
        p = p->next_value;
    }
    p->next_value = q;
    q->value = element;
    q->next_value = NULL;
    return 0;

}

/* iztrivane na purviq element ot spisuka */

int dellFirst(int *n){
    node_t *p = start;
    if(start){
        *n = start->value;
        start = start->next_value;
        free(p);
        return 0;
    }
    else{
        return 1;
    }
}
/* iztrivane na element sas stoinost k i vrushtane na element predi nego */
node_t* dellElemReturnAfter(int *n, int k){
    node_t *p = start;
    node_t *q;
    while(p->value != k){
        if(p->next_value == NULL){
            return NULL;
        }
        else{
            q = p;
            p = p->next_value;
        }
    }
    *n = p->value;
    q->next_value = p->next_value;
    free(p);
    return q->next_value;
}

/* printirane na opredelna poziciq do kraq na spisuka */

void printAfter(node_t *curr){
    node_t *p = curr;
    while(p != NULL){
        printf("%d ", p->value);
        p = p->next_value;
    }
}

/* iztrivane na posledniq element ot spisuka */

void dellEnd(int *n){
    node_t *p = start;
    node_t *q;
    while(p->next_value != NULL){
        q = p;
        p = p->next_value;
    }
    *n = p->value;
    q->next_value = NULL;
    free(p);
}

/* tursene na element iterativen variant */

node_t* search_iter(int k){
    node_t *p = start;
    while(p->value != k){
        if(p->next_value == NULL){
            return NULL;
        }
        else{
            p = p->next_value;
        }
    }
    return p;
}
/* printira elementa na N index */
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
