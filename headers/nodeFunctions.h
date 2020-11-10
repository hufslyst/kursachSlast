#ifndef NODEFUNCTIONS_H_INCLUDED
#define NODEFUNCTIONS_H_INCLUDED
#include "structs.h"
#include "structFunctions.h"
#include "textFunctions.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define maxlen 128

Head *make_head();

Node *create_node(char **str, int i, Node *p, Head *ddd);

void add_first(Head *my_head);

void add_last(Head *ddd);

void delete_node(Head *ddd, int choice);

void fill_node(Head *ddd);

void free_Node(Node *temp);

void node_out(Head *head);

void node_out_reverse(Head *head);

void free_list(Head *ddd);

void edit_structure(Head *ddd, int choice, int ch1);

#endif // NODEFUNCTIONS_H_INCLUDED
