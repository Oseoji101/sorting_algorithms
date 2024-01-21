#include "sort.h"
void insertion_sort_list(listint_t **list);
/**
 * insertion_sort_list - insert sort
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first = NULL;
	listint_t *second = NULL;
	listint_t *node = NULL;

	if (list == NULL || *list == NULL)
		return;

	node = (*list)->next;

	while (node != NULL)
	{
		while (node->prev != NULL && node->prev->n > node->n)
		{
			first = node->prev;
			second = node;

			if (first->prev == NULL)
				*list = second;
			else
				first->prev->next = second;

			second->prev = first->prev;

			first->prev = second;
			first->next = second->next;



			if (second->next != NULL)
				second->next->prev = first;


			second->next = first;
			node = second;
			print_list(*list);

		}

		node = node->next;
	}


}
