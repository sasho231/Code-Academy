/* 
Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър */


#include "func.h"

treeNode_t *root = NULL;

int main(void){
    int i = 0;
    for(i=0; i < 10; i++){
        insertKey(&root, i);
    }
    preorder(root);
    return 0;
}