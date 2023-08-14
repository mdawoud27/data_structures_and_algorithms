#include "linked_list.h"

int main(void)
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    head->value = 10;

    // insert_node_end(&head, 10);
    insert_node_end(&head, 20);
    insert_node_end(&head, 30);
    insert_node_end(&head, 30);
    insert_node_end(&head, 20);
    insert_node_end(&head, 10);

    // insert_node_first(&head, 5);
    // insert_node_first(&head, 4);
    // insert_node_first(&head, 3);

    // insert_node_pos(&head, 1, 0);
    // insert_node_pos(&head, 2, 1);
    // insert_node_pos(&head, 50, 9);

    // insert_in_sorted_list(&head, 8);
    // insert_in_sorted_list(&head, 55);

    // delete_node_end(&head);
    // delete_node_end(&head);

    // delete_node_first(&head);
    // delete_node_first(&head);

    // delete_node_pos(&head, 0);
    // delete_node_pos(&head, cnt_node(head));
    // delete_node_pos(&head, 3);

    // delete_node_with_value(&head, 20);
    // delete_node_with_value(&head, 5);

    print_list(head);

    // int n = cnt_node(head);
    // printf("Number of linked list nodes are = %d\n", n);
    // if (is_list_circular(head) == 1)
    // 	printf("list is a circular\n");
    // else
    // 	printf("list is not a circular\n");

     if (is_palindrome(&head) == 1)
        printf("Linked list is a palindrome\n");
    else
        printf("Linked list is not a palindrome\n");


    free_list(head);

    return 0;
}
