#include "sort.h"

/**
 * insertion_sort_list - function that sorts elements.
 * Description: Best for linked list.
 * Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 * Time complexity:
 * 	 Best Case: O(N)
 * 	 Average Case: O(N^2)
 * 	 Worst Case: O(N^2)
 * Space complexity: O(1) In-place algorithm
 * Stable: Yes
 * @list: double linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if ((*list) == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		prev = curr->prev;
		while (prev != NULL && prev->n > curr->n)
		{
			// Use the swap_nodes function to perform the swap
			swap_nodes(prev, curr);

			// Move 'prev' back to the previous node for further comparisons
			prev = curr->prev;
			if (prev == NULL)
				*list = curr;

			// Print the current state of the list after each swap
			print_list(*list);
		}
		curr = curr->next;
	}
}
