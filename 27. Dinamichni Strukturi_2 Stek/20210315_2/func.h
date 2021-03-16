#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

void insertKey(treeNode_t **tree, int x);

void preorder(treeNode_t *n);