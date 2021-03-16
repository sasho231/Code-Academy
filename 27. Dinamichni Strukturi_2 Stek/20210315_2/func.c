#include "func.h"


void insertKey(treeNode_t **tree, int x){
    treeNode_t *temp, *previous, *current;
    if(*tree == NULL){
        temp = (treeNode_t*)malloc(sizeof(treeNode_t));
        temp->data = x;
        temp->left = temp->right = NULL;
        *tree = temp;
        return;
    }
    if(x < (*tree)->data){
        insertKey(&(*tree)->left, x);
    }
    else if(x > (*tree)->data){
        insertKey(&(*tree)->right, x);
    }
}
void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}