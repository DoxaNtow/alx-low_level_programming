#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current = *h;

	while (current && current > current->next)
	{
		listint_t *temp = current->next;

		free(current);
		current = temp;
		len++;
	}

	*h = NULL;

	return (len);
}

