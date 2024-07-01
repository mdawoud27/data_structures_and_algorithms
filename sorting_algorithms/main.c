#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
// Bubble Sort
	// int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    // size_t n = sizeof(array) / sizeof(array[0]);

    // print_array(array, n);
    // printf("\n");
    // bubble_sort(array, n);
    // printf("\n");
    // print_array(array, n);

// Insertion Sort
	// int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    // size_t n = sizeof(array) / sizeof(array[0]);

    // print_array(array, n);
    // printf("\n");
    // insertion_sort(array, n);
    // printf("\n");
    // print_array(array, n);

// Insertion Sort List
	// listint_t *list;
    // int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    // size_t n = sizeof(array) / sizeof(array[0]);

    // list = create_listint(array, n);
    // if (!list)
    //     return (1);
    // print_list(list);
    // printf("\n");
    // insertion_sort_list(&list);
    // printf("\n");
    // print_list(list);

// Selection Sort
	// int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    // size_t n = sizeof(array) / sizeof(array[0]);

    // print_array(array, n);
    // printf("\n");
    // selection_sort(array, n);
    // printf("\n");
    // print_array(array, n);

// Quick Sort
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
