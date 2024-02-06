#include "search_algos.h"

/**
 * binary_search_iterative - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm (Iterative)
 * Description:
 *	  - Time Complexity:
 * 	      - Best Case: O(1)
 *		  - Average & Worst Case: O(log(n))
 *	  - Auxiliary Space: O(1)
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if not exists
 */
int binary_search_iterative(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * binary_search_recursive - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm (Recursive)
 * Description:
 *	  - Time Complexity:
 * 	      - Best Case: O(1)
 *		  - Average & Worst Case: O(log(n))
 *	  - Auxiliary Space: O(1)
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if not exists
 */
int binary_search_recursive(int *array, size_t size, int value)
{
	if (size == 0)
		return (-1);

	size_t mid = size / 2;

	/*         (array, left, right);   */
	print_array(array, 0, size - 1);
	if (array[mid] == value)
		return (mid);

	/* If the value is smaller than the middle element,
     * search the left subarray recursively */
	if (array[mid] > value)
		return binary_search_recursive(array, mid - 1, value);

	/* If the value is greater than the middle element,
     * search the right subarray recursively */
	else
	{
		int result = binary_search_recursive(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return -1;
		return result + mid + 1; // Adjust the result index to reflect the original array
	}
}
