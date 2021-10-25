#include "sort.h"

/**
 * insertion_sort_list - function that builds the final
 * sorted array one item at a time
 * @list: pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *auxiliar;
	listint_t *temporal;
	listint_t *previo;

	if (!list)
	{
		return;
	}

	auxiliar = *list;
	temporal = auxiliar->next;

	while (temporal)
	{
		auxiliar = temporal;
		temporal = temporal->next;
		previo = auxiliar->prev;

		while (previo && auxiliar->n < previo->n)
		{
			if (previo->prev)
			{
				previo->prev->next = auxiliar;
			}
			auxiliar->prev = previo->prev;
			previo->next = auxiliar->next;
			if (auxiliar->next)
			{
				auxiliar->next->prev = previo;
			}
			auxiliar->next = previo;
			previo->prev = auxiliar;
			if (!auxiliar->prev)
			{
				*list = auxiliar;
			}
			previo = auxiliar->prev;
			print_list(*list);
		}
	}
}
