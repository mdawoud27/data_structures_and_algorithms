#include "sort.h"

/**
 * insertionSort - function that sorts elements.
 * Description: Best for linked list.
 * Time complexity:
 * 	 Best Case: O(N)
 * 	 Average Case: O(N^2)
 * 	 Worst Case: O(N^2)
 * Space complexity: O(1) In-place algorithm
 * Stable: Yes
 * @array: array which entered.
 * @size: size of entered array.
 */
void insertion_sort(int *array, size_t size)
{
	size_t key, i, j;

	for (i = 1; i < size; i++)
	{
		key = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}
