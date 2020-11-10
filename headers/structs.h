#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <stdlib.h>

typedef struct sneakers
{
    char *name;
    char *model;
    int price;
    float characteristic[2];//average
}sneakers;

typedef struct node
{
    int id;
    sneakers *structure;
    struct node *next;
    struct node *prev;
}Node;

typedef struct Head
{
    int cnt;
    struct node *first;
    struct node *last;
}Head;



#endif // STRUCT_H_INCLUDED
