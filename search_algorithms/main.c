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
    int array_jump[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_interpolation[] = {0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9};
    int array_exponential[] = {0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99};

    size_t size_linear = sizeof(array_linear) / sizeof(array_linear[0]);
    size_t size_binary = sizeof(array_binary) / sizeof(array_binary[0]);
    size_t size_jump = sizeof(array_jump) / sizeof(array_jump[0]);
    size_t size_interpolation = sizeof(array_interpolation) / sizeof(array_interpolation[0]);
    size_t size_exponential = sizeof(array_exponential) / sizeof(array_exponential[0]);

/*Linear Search*/
    printf("\n** Linear Search **\n");
    printf("Found %d at index: %d\n\n", 3, linear_search(array_linear, size_linear, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array_linear, size_linear, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array_linear, size_linear, 999));

/*Binary Search (Recursive) - MAKE SURE THAT ARRAY IS REALLY SORTED :)*/
    printf("\n** Binary Search Recursive **\n");
    printf("Found %d at index: %d\n\n", 2, binary_search_recursive(array_binary, size_binary, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search_recursive(array_binary, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search_recursive(array_binary, size_binary, 999));

/*Binary Search (Iterative) - MAKE SURE THAT ARRAY IS REALLY SORTED :)*/
    printf("\n** Binary Search Iterative **\n");
    printf("Found %d at index: %d\n\n", 2, binary_search_iterative(array_binary, size_binary, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search_iterative(array_binary, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search_iterative(array_binary, size_binary, 999));

/*Jump Search*/
    printf("\n** Jump Search **\n");
    printf("Found %d at index: %d\n\n", 6, jump_search(array_jump, size_jump, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array_jump, size_jump, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array_jump, size_jump, 999));

/*Interpolation search*/
    printf("\n** Interpolation search **\n");
    printf("Found %d at index: %d\n\n", 3, interpolation_search(array_interpolation, size_interpolation, 3));
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array_interpolation, size_interpolation, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array_interpolation, size_interpolation, 999));

/*Exponential search*/
    printf("\n** Exponential search **\n");
    printf("Found %d at index: %d\n\n", 62, exponential_search(array_exponential, size_exponential, 62));
    printf("Found %d at index: %d\n\n", 3, exponential_search(array_exponential, size_exponential, 3));
    printf("Found %d at index: %d\n", 999, exponential_search(array_exponential, size_exponential, 999));

    return (EXIT_SUCCESS);
}
