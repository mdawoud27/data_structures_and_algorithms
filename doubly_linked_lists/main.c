#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
    node *head = NULL;

    /*Insert at the first*/
    head = insert_first(head, 10);
    head = insert_first(head, 5);
    head = insert_first(head, 2);
    head = insert_first(head, 1);

    /*Insert at the end*/
    head = insert_end(head, 20);
    head = insert_end(head, 30);

    /*Insert at the specific postion*/
    head = insert_pos(head, -2, 0);
    head = insert_pos(head, 40, 7);
    head = insert_pos(head, 15, 5);
    head = insert_pos(head, 35, 8);

    /*Delete at the first*/
    head = delete_first(head);
    head = delete_first(head);
    head = delete_first(head);

    /*Delete at the end*/
    head = delete_end(head);
    head = delete_end(head);

    // /*Insert at the specific postion*/
    head = delete_pos(head, 2);
    head = delete_pos(head, 0);
    
    /*Print doubly linked list nodes*/
    print_node(head);

    /*Print number of nodes*/
    int n = count_nodes(head);
    if (n == 0)
        printf("Doubly linked list is empty\n");
    else
    {
        printf("Number of nodes = %d\n", n);
    }

    /*Free nodes*/
    free_nodes(head);

    return 0;
}
