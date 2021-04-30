#include "func.h"

node_t *first = NULL;
node_t *last = NULL;

int write(int n){
    node_t* p = last;
    last = (node_t*)malloc(sizeof(node_t));
    if(!last) return -1;
    last->data = n;
    last->next = NULL;
    if(p != NULL) p->next = last;
    if(first == NULL)
        first = last;
    return 0;
}


int read(int *n){
    if(first){
        *n = first->data;
        node_t *p = first;
        first = first->next;
        free(p);
        return 1;
    }
    else{
        return 0;
    }
}