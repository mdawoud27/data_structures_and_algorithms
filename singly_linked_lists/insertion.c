#include "linked_list.h"

void insert_node_end(node **head, int value)
{
    node *ptr = NULL;
    node *new = malloc(sizeof(node));
    new->value = value;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        ptr = *head;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = new;
    }
}

void insert_node_first(node **head, int value)
{
    node *new = malloc(sizeof(node));
    new->value = value;

    if (*head == NULL)
        *head = new;
    else
    {
        new->next = *head;
        *head = new;
    }
}

void insert_node_pos(node **head, int value, int pos)
{
    node *new = malloc(sizeof(node)), *ptr = NULL;
    new->value = value;
    new->next = NULL;
    ptr = *head;

    if (pos == 0)
    {
        new->next = *head;
        *head = new;
    }
    else if (pos == cnt_node(*head))
    {
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = new;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
            ptr = ptr->next;

        new->next = ptr->next;
        ptr->next = new;
    }
}

void insert_in_sorted_list(node **head, int number)
{
    node *new = malloc(sizeof(node)), *ptr = *head;
    new->value = number;
    new->next = NULL;

    if (*head == NULL || (*head)->value >= number)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        while (ptr->next && ptr->next->value < number)
            ptr = ptr->next;

        new->next = ptr->next;
        ptr->next = new;
    }
}
