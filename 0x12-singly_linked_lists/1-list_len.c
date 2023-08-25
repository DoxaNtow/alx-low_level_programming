#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * @h: pointer to list_t list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}

