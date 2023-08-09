#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void print_list(node *head);

void insert_node_end(node **head, int value);
void insert_node_first(node **head, int value);
void insert_node_pos(node **head, int value, int pos);
void insert_in_sorted_list(node **head, int number);

void delete_node_end(node **head);
void delete_node_first(node **head);
void delete_node_pos(node **head, int pos);
void delete_node_with_value(node **head, int value);

int is_list_circular(node *head);
int cnt_node(node *head);
void free_list(node *head);

int main(void)
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    head->value = 10;

    insert_node_end(&head, 20);
    insert_node_end(&head, 30);
    insert_node_end(&head, 40);

    insert_node_first(&head, 5);
    insert_node_first(&head, 4);
    insert_node_first(&head, 3);

    insert_node_pos(&head, 1, 0);
    insert_node_pos(&head, 2, 1);
    insert_node_pos(&head, 50, 9);

    insert_in_sorted_list(&head, 8);
    insert_in_sorted_list(&head, 55);

    delete_node_end(&head);
    delete_node_end(&head);

    delete_node_first(&head);
    delete_node_first(&head);

    delete_node_pos(&head, 0);
    delete_node_pos(&head, cnt_node(head));
    delete_node_pos(&head, 3);

    delete_node_with_value(&head, 20);
    delete_node_with_value(&head, 5);

    print_list(head);

    // int n = cnt_node(head);
    // printf("Number of linked list nodes are = %d\n", n);
    // if (is_list_circular(head) == 1)
    // 	printf("list is a circular\n");
    // else
    // 	printf("list is not a circular\n");

    free_list(head);

    return 0;
}

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
        printf("Linked list is empty\n");

    else
        while (ptr)
        {
            cnt++;
            printf("node no.%d = %d\n", cnt, ptr->value);
            ptr = ptr->next;
        }
}

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

int is_list_circular(node *head)
{
    node *fast, *slow;
    fast = slow = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}

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

