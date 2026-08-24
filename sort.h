#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Helper function */
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif /* SORT_H */
