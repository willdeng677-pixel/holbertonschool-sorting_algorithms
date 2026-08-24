#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer
 * @prev: Points to the previous node
 * @next: Points to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Array sorting functions */
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);

/* Doubly linked list sorting functions */
void insertion_sort_list(listint_t **list);

/* Printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
