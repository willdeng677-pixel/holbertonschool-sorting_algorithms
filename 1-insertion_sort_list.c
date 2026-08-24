#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insert;
	listint_t *prev;
	listint_t *next;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;
		insert = current;

		while (insert->prev != NULL && insert->n < insert->prev->n)
		{
			prev = insert->prev;

			/* Remove insert from its current position */
			prev->next = insert->next;
		if (insert->next != NULL)
			insert->next->prev = prev;

		/* Put insert before prev */
			insert->prev = prev->prev;
			insert->next = prev;

		if (prev->prev != NULL)
			prev->prev->next = insert;
		else
			*list = insert;

			prev->prev = insert;

			print_list(*list);
		}

		current = next;
	}
}
