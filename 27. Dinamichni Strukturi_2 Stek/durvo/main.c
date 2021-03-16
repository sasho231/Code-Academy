#include "func.h"

treeNode_t *root = NULL, *z;

int main(void){

    insert(2);
    insert(5);
    insert(6);
    insert(12);
    insert(55);
    z = root;
    preorder(z);
    printf("\n");
    search_iter(z, 6);
    del(12);
    z = root;
    preorder(z);
    
    return 0;

}