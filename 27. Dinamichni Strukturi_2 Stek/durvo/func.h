#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;
/* dobavq element */
treeNode_t *insert(int d);
/*printira */
void preorder(treeNode_t *n);
/* tursi chislo */
treeNode_t *search_iter(treeNode_t *t, int n);

/* delete next element*/
int del(int n);
/* dobavq element */
int add(int n, treeNode_t *t);

/* tursene s rekursiq */
treeNode_t *search_rec(treeNode_t *t, int n);

/* print current */

void printCurr(treeNode_t *curr);

/* print right */

void printRight(treeNode_t *t);
