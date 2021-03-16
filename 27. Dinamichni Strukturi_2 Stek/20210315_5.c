/* Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво. */

#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;
typedef struct node_t{
    int data;
    node_t *left;
    node_t *right;
}node_t;

node_t *root = NULL;

int insert(node_t **tree, int n){
    node_t *tmp;
    if(*tree == NULL){
        tmp = (node_t*)malloc(sizeof(node_t));
        tmp->data = n;
        tmp->left = tmp->right = NULL;
        *tree = tmp;
    }
    if(n < (*tree)->data)
        insert(&(*tree)->left, n);
    else if(n > (*tree)->data)
        insert(&(*tree)->right, n);
}

node_t *search_rec(node_t *t, int n){
    if(t != NULL){
        if(n < t->data)
            t = search_rec(t->left, n);
        else if(n > t->data)
            t = search_rec(t->right, n);
    }
    return t;
}

int main(void){
    insert(&root, 15);
    insert(&root, 123);
    insert(&root, 25);
    search_rec(root, 15);
    return 0;


}