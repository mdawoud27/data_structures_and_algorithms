#include "lists.h"
/**
 * is_palindrome - Check if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * Return: 1 if the linked list is a palindrome, 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head;
	listint_t *prev = NULL, *temp = NULL;

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
		if (prev->n != slow->n)
			return (0);
		prev = prev->next;
		slow = slow->next;
	}

	return (1);
}
