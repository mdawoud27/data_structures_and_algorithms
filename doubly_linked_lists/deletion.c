#include "linked_list.h"


node *delete_first(node *head)
{
    if (!head)
        return NULL;
    
    /*Special case: Only one node in the list*/
    if (!head->next)
    {
        free(head);
        return NULL;
    }
    
    node *temp = head;
    head = head->next;
    if (head)
        head->prev = NULL;
    free(temp);

    return head;
}

node *delete_end(node *head)
{
    if (!head)
        return NULL;
    
    /*Special case: Only one node in the list*/
    if (!head->next)
    {
        free(head);
        return NULL;
    }
    
    node *ptr = head;
    while (ptr->next->next)
        ptr = ptr->next;
    
    free(ptr->next);
    ptr->next = NULL;

    return head;
}

node *delete_pos(node *head, int pos)
{
    node *ptr = NULL;

    if (pos < 0 || !head)
    {
        printf("Invalid position or empty list\n");
        return head;
    }

    if (pos == 0)
    {
        if (!head->next)
        {
            free(head);
            return NULL;
        }

        node *temp = head;
        head = head->next;
        if (head)
            head->prev = NULL;

        free(temp);
        return head;        
    }

    else if (pos == count_nodes(head))
    {
        ptr = head;
        while (ptr->next->next)
            ptr = ptr->next;
        
        free(ptr->next);
        ptr->next = NULL;

        return head;
    }

    else
    {
        ptr = head;
        for (int i = 0; i < pos - 1 && ptr; i++)
            ptr = ptr->next;

        if (!ptr || !ptr->next)
        {
            printf("Invalid position\n");
            return head;
        }
        
        node *temp = ptr->next;
        ptr->next = temp->next;
        if (temp->next)
            temp->next->prev = ptr;
        free(temp);
        
        return head;
    }
}
