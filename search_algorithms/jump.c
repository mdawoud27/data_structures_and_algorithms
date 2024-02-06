#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * Description:
 *	  - Time Complexity:  O(√n)
 *	  - Auxiliary Space: O(1)
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not exists.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t step = sqrt(size), low = 0, high = step, i;

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	while (high < size && array[high] < value)
	{
		low = high;
		high += step;
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	for (i = low; i <= high && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
