#include "linked_list.h"


void print_node(node *head)
{
    node *ptr = NULL;
    int cnt = 1;

    if (!head)
        printf("Doubly linked list is empty\n");
    else
    {
        ptr = head;
        while (ptr)
        {
            printf("node no.%d = %d\n", cnt, ptr->value);
            ptr = ptr->next;
            cnt++;
        }
        
    }
}

int count_nodes(node *head)
{
    node *ptr = NULL;
    int cnt = 0;

    if (!head)
        return 0;
    
    ptr = head;
    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }

    return cnt;    
}

void free_nodes(node *head)
{
    node *ptr = head;

    while (ptr)
    {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    
}
