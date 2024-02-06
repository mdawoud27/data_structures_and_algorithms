#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * Description:
 *      - Time Complexity: O(log2(log2(n))) for the average case, and O(n) for the worst case
 *      - Auxiliary Space Complexity: O(1)
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not exists.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
								(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
								(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
