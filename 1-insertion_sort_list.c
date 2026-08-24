#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;
	listint_t *next;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;

		while (current->prev != NULL &&
		       current->n < current->prev->n)
		{
			prev = current->prev;

			if (current->next != NULL)
				current->next->prev = prev;

			prev->next = current->next;

			current->prev = prev->prev;
			current->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;

			prev->prev = current;

			print_list(*list);
		}

		current = next;
	}
}
