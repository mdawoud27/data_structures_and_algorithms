#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Function that prints the entered array.
 *
 * @array: Array to be printed.
 * @left: The first index
 * @right: The last index
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array && left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
	}
}
