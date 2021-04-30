/* Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на */


#include "func.h"

#define SIZE 11
node_t *root = NULL, *z;

const int g_arr[SIZE] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 14, 12};

int main(void){
    int i = 0;
    for(i=0 ; i < SIZE; i++){
        insert(&root, g_arr[i]);
    }
    printf("Original tree.\n");
    z = root;
    preorder(z);
    
    delElement(1, root);
    delElement(7, root);
    delElement(12, root);
    delElement(14, root);
    printf("After deletion of 1,7,12 and 14 \n\n");
    preorder(z);

    return 0;

}