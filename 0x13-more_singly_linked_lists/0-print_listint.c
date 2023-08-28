#include "lists.h"

/**
 * print_listint -function that  prints all the elements of a linked list
 * @h: linked list to be print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		n++;
	}

	return (n);
}

