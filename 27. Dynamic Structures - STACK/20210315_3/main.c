/* Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове: */
#include "func.h"

node_t *root = NULL, *root1 = NULL, *root2 = NULL, *root3 = NULL;
node_t *root4 = NULL;



int main(void){
    int i = 0;
    fillarr0(&root);
    preorder(root);
    printf("\n\n");

    fillarr1(&root1);
    preorder(root1);
    printf("\n\n");

    fillarr2(&root2);
    preorder(root2);
    printf("\n\n");

    fillarr3(&root3);
    preorder(root3);
    printf("\n\n");
    
    fillarr4(&root4);
    preorder(root4);

    return 0;
}