#pragma once
#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *left;
    node_t *right;
}node_t;

extern node_t *root;
extern node_t *root1;
extern node_t *root2;
extern node_t *root3;
extern node_t *root4;

int insert(node_t **tree, int x);

int fillarr0(node_t **tree);
int fillarr1(node_t **tree);
int fillarr2(node_t **tree);
int fillarr3(node_t **tree);
int fillarr4(node_t **tree);

void preorder(node_t *tree);