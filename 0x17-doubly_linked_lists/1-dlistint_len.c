#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: entry point of list
 * Return: no. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	for (; h->prev != NULL; h = h->prev)
	{
		/* Empty loop */
	}

	for (; h != NULL; h = h->next)
	{
		counter++;
	}

	return (counter);
}

