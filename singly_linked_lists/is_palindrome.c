#include "linked_list.h"

/**
 * is_palindrome - Check if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * Return: 1 if the linked list is a palindrome, 0 otherwise.
 */
int is_palindrome(node **head)
{
    node *slow = *head, *fast = *head;
    node *prev = NULL, *temp = NULL;

    /*An empty list is considered a palindrome*/
    if (*head == NULL || (*head)->next == NULL)
        return (1);

    /*
      This code block is a crucial part of the function. It serves two main purposes:
       - finding the middle of the linked list.
       - reversing the first half of the linked list.
    */
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    /*
    If the linked list has an odd number of elements,
    his step ensures that slow is positioned correctly for comparison, skipping the middle element.
    */
    if (fast != NULL)
        slow = slow->next;

    /*
    This loop compares the reversed first half (prev) with the second half (slow) of the linked list.
    */
    while (prev != NULL && slow != NULL)
    {
        if (prev->value != slow->value)
            return (0);
        prev = prev->next;
        slow = slow->next;
    }

    return (1);
}

/**
 * is_palindrome2 - Check if a singly linked list is a palindrome.
 * using arrays
 * @head: A pointer to the head of the linked list.
 *
 * Return: 1 if the linked list is a palindrome, 0 otherwise.
 */
int is_palindrome2(node **head)
{
    /*An empty list is considered a palindrome*/
    if (*head == NULL || (*head)->next == NULL)
        return 1;
    
    /*Count the linked list size*/
    int size = 0;
    node *ptr = *head;
    while (ptr)
    {
        size++;
        ptr = ptr->next;
    }

    /*Creating an array to restore linked list data*/
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
        return 0;
    
    ptr = *head;
    for (int i = 0; i < size; i++)
    {
        arr[i] = ptr->value;
        ptr = ptr->next;
    }

    /*Check the array is palindrome or not*/
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            free(arr);
            return 0;
        }
    }

    free(arr);
    return 1;
}
