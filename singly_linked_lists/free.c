#include "linked_list.h"

void free_list(node *head)
{
    node *ptr = head;

    while (ptr)
    {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}
