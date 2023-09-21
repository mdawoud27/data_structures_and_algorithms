#include "sort.h"

/**
 * selectionSort - function that sorts elements.
 * Description: Simple algorithm
 * Time complexity:
 * 	Best Case: O(N^2)
 * 	Average Case: O(N^2)
 * 	Worst Case: O(N^2)
 * Space complexity: O(1) In-place algorithm
 * Stable: No
 * @array: array which entered.
 * @size: size of entered array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndx;

	for (i = 0; i < size - 1; i++)
	{
		minIndx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndx])
				minIndx = j;
		}
		if (minIndx != i)
		{
			swap(&array[minIndx], &array[i]);
			print_array(array, size);
		}
	}
}
