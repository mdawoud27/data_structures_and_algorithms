#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array_linear[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    int array_binary[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size_linear = sizeof(array_linear) / sizeof(array_linear[0]);
    size_t size_binary = sizeof(array_binary) / sizeof(array_binary[0]);

/*Linear Search*/
    printf("\n** Linear Search **\n");
    printf("Found %d at index: %d\n\n", 3, linear_search(array_linear, size_linear, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array_linear, size_linear, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array_linear, size_linear, 999));

/*Binary Search - MAKE SURE THAT ARRAY IS REALLY SORTED :)*/
    printf("\n** Binary Search **\n");
    printf("Found %d at index: %d\n\n", 2, binary_search(array_binary, size_binary, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array_binary, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array_binary, size_binary, 999));

    return (EXIT_SUCCESS);
}
