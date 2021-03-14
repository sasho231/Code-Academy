#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int value;
    t_node* next_value;
}t_node;

extern t_node *start;

void init();

int add(int number);

void print_list();

int dell_First(int *number);