#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int value;
    node_t* next_value;
}node_t;


node_t* start;

void init();
int add(int number);
void printList();
int addElementAfter(int element, int k);
int addElementBefore(int element, int k);
int addElementEnd(int element);
int dellFirst(int *n);
node_t* dellElemReturnAfter(int *n, int k);
void printAfter(node_t *curr);
void dellEnd(int *n);
node_t* search_iter(int k);
int GetNth(node_t* head, int index);

