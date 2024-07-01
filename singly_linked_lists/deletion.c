#include "linked_list.h"

void delete_node_end(node **head)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        free(*head);
        head = NULL;
        return;
    }

    node *ptr = *head;

    while (ptr->next->next != NULL)
        ptr = ptr->next;

    free(ptr->next);
    ptr->next = NULL;
}

void delete_node_first(node **head)
{
    if (*head == NULL)
        return;

    node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void delete_node_pos(node **head, int pos)
{
    node *ptr = *head;

    if (*head == NULL || pos < 0)
        return;

    if (pos == 0)
    {
        node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
        ptr = ptr->next;

    if (ptr == NULL || ptr->next == NULL)
        return;

    node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

void delete_node_with_value(node **head, int value)
{
    node *ptr = *head;
    int pos = 0;

    while (ptr)
    {
        if (ptr->value == value)
        {
            delete_node_pos(head, pos);
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    printf("Your node's value is not exist\n");
}
