#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *prev;
    struct node *next;
} node;

/*Insertion Operation*/
node *insert_first(node *head, int value);
node *insert_end(node *head, int value);
node *insert_pos(node *head, int value, int pos);

/*Deletion Operation*/
node *delete_first(node *head);
node *delete_end(node *head);
node *delete_pos(node *head, int pos);

/*Other Operation*/
void print_node(node *head);
int count_nodes(node *head);
void free_nodes(node *head);

#endif
