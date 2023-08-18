#include "linked_list.h"


node *insert_first(node *head, int value)
{
    node *new = malloc(sizeof(node));
    new->value = value;
    new->next = NULL;

    if (!head)
        new->prev = NULL;
    
    else
    {
        new->next = head;
        head->prev = new;
    }
    
    head = new;
    return head;
}

node *insert_end(node *head, int value)
{
    node *new = malloc(sizeof(node)), *ptr = NULL;
    new->value = value;
    new->next = NULL;

    if (!head)
    {
        new->prev = NULL;
        head = new;
        return head;
    }

    ptr = head;
    while (ptr->next)
        ptr = ptr->next;

    ptr->next = new;
    new->prev = ptr;

    return head;        
}

node *insert_pos(node *head, int value, int pos)
{
    node *new = malloc(sizeof(node)), *ptr = NULL;

    if (!new)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    new->value = value;
    new->next = NULL;

    if (pos == 0)
    {
        if (!head)
            new->prev = NULL;

        else
        {
            new->next = head;
            head->prev = new;
        }

        head = new;
        return head;
    }

    else if (pos == count_nodes(head))
    {
        if (!head)
        {
            new->prev = NULL;
            head = new;
            return head;
        }
        
        ptr = head;
        while (ptr->next)
            ptr = ptr->next;

        ptr->next = new;
        new->prev = ptr;
        
        return head;
    }

    else
    {
        ptr = head;
        for (int i = 0; i < pos - 1; i++)
            ptr = ptr->next;

        node *temp = ptr;
        new->next = temp->next;
        new->prev = ptr;
        ptr->next = new;

        return head;
    }
}
