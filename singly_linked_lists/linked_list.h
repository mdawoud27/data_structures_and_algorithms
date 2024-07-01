#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

/*Struct node to create a new node*/
typedef struct node
{
    int value;
    struct node *next;
} node;

/*print the linked list nodes*/
void print_list(node *head);

/*Insertion methods*/
void insert_node_end(node **head, int value);
void insert_node_first(node **head, int value);
void insert_node_pos(node **head, int value, int pos);
void insert_in_sorted_list(node **head, int number);

/*Deletetion methods*/
void delete_node_end(node **head);
void delete_node_first(node **head);
void delete_node_pos(node **head, int pos);
void delete_node_with_value(node **head, int value);

/*checks if list is circular or not*/
int is_list_circular(node *head);

/*count nodes in linked list*/
int cnt_node(node *head);

/*checks if a singly linked list is a palindrome or not*/
int is_palindrome(node **head);
int is_palindrome2(node **head);

/*free list*/
void free_list(node *head);

#endif
