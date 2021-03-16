#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *left;
    node_t *right;
}node_t;

extern node_t *root;

int insert(node_t **tree, int x);

void preorder(node_t *tree);

node_t *delElement(int x,node_t *T);


