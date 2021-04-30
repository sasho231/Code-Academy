#include "func.h"

int insert(node_t **tree, int x)
{
    node_t *tmp, *previous, *current;
    if (*tree == NULL)
    {
        tmp = (node_t *)malloc(sizeof(node_t));
        tmp->data = x;
        tmp->left = tmp->right = NULL;
        *tree = tmp;
    }
    if (x < (*tree)->data)
        insert(&(*tree)->left, x);
    else if (x > (*tree)->data)
        insert(&(*tree)->right, x);
}

void preorder(node_t *tree)
{
    if (tree != NULL)
    {
        printf("%d ", tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}


node_t *delElement(int x,node_t *T){ 

    if (T == NULL)
        return T;
    if (x < T->data)
        T->left = delElement(x,T->left);

    else if (x > T->data)
    {
        T->right = delElement(x,T->right);
    }
    else
    {
        if (T->left == NULL)
        {
            node_t *temp = T->right;
            free(T);
            return temp;
        }
        else if (T->right == NULL)
        {
           node_t *temp = T->left;
            free(T);
            return temp;
        }
    }
    return T;
}