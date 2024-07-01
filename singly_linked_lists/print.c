#include "linked_list.h"

int cnt_node(node *head)
{
    int cnt = 0;
    node *ptr = head;

    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

void print_list(node *head)
{
    node *ptr = head;
    int cnt = 0;

    if (head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    while (ptr)
    {
        cnt++;
        printf("node no.%d = %d\n", cnt, ptr->value);
        ptr = ptr->next;
    }
}
