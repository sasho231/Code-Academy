#include "func.h"


node_t *add(int data)
{
   node_t *temp = (node_t*)malloc(sizeof(node_t));
   temp->next = temp;
   temp->data = data;
}

/* Function to find the only person left
   after one in every m-th node is killed
   in a circle of n nodes */
void game(int m, int n){
    // Create a circular linked list of
    // size N.
    node_t *head = add(1);
    node_t *previous = head;
    int i = 0;
    for(i = 2; i <= n; i++){
        previous->next = add(i);
        previous = previous->next;
    }
    previous->next = head; /* connect last node to first */

    /*While only one node is left in the linked list*/
    node_t *ptr1 = head, *ptr2 = head;
    while(ptr1->next != ptr1){
        int counter = 1;

        /*find the m element */
        while(counter != m){
            ptr2 = ptr1;
            ptr1 = ptr1->next;
            counter++;
        }

        /* remove the m element */
        ptr2->next = ptr1->next;
        free(ptr1);
        ptr1 = ptr2->next;

    }

    printf("Winner is %d\n", ptr1->data);

}