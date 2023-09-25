#include "sort.h"

/**
 * partition - Lomuto partition scheme
 * @array: The array to be sorted
 * @low: The low index of the subarray
 * @high: The high index of the subarray
 * @size: Size of the array
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_recursive - Recursive function to perform Quick Sort
 * @array: The array to be sorted
 * @low: The low index of the subarray
 * @high: The high index of the subarray
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * Description: divid and conquer
 * Time complexity:
 * 	 Best Case: O(nlog(n))
 * 	 Average Case: O(nlog(n))
 * 	 Worst Case: O(n^2)
 * Space complexity: O(log(n))
 * Stable: No
 * using the Quick Sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
