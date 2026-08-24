#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints a doubly linked list
 * @list: list to print
 */
void print_list(const listint_t *list)
{
	while (list != NULL)
	{
		printf("%d", list->n);

		if (list->next != NULL)
			printf(", ");

		list = list->next;
	}

	printf("\n");
}
