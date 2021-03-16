#include "func.h"

const int G_arr_root[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
const int G_arr_root1[SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
const int G_arr_root2[SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
const int G_arr_root3[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
const int G_arr_root4[SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};

int insert(node_t **tree, int x){
    node_t *tmp, *previous, *current;
    if(*tree == NULL){
        tmp = (node_t*)malloc(sizeof(node_t));
        tmp->data = x;
        tmp->left = tmp->right = NULL;
        *tree = tmp;
    }
    if(x < (*tree)->data)
        insert(&(*tree)->left, x);
    else if(x > (*tree)->data)
        insert(&(*tree)->right, x);
    
}

int fillarr0(node_t **tree){
    int i = 0;
    for(i=0; i < SIZE; i++){
        insert(&(*tree), G_arr_root[i]);
    }
}
int fillarr1(node_t **tree){
    int i = 0;
    for(i=0; i < SIZE; i++){
        insert(&(*tree), G_arr_root1[i]);
    }
}
int fillarr2(node_t **tree){
    int i = 0;
    for(i=0; i < SIZE; i++){
        insert(&(*tree), G_arr_root2[i]);
    }
}
int fillarr3(node_t **tree){
    int i = 0;
    for(i=0; i < SIZE; i++){
        insert(&(*tree), G_arr_root3[i]);
    }
}
int fillarr4(node_t **tree){
    int i = 0;
    for(i=0; i < SIZE; i++){
        insert(&(*tree), G_arr_root4[i]);
    }
}

void preorder(node_t *tree){
    if(tree != NULL){
        printf("%d ", tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}