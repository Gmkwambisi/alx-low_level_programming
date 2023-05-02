#include "lists.h"

/**
 * all  lists elements  are printed
 * h:   lists   head
 *
 * On return it gives number of nodes
 *  The int return
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
