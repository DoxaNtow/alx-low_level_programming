#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head/entry of the list.
 * @index: Index of the node to search for
 * Return: Nth node or NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position;
	dlistint_t *current;

	position = 0;
	if (head == NULL)
		return (NULL);

	for (current = head; current != NULL; current = current->next)
	{
		if (position == index)
			return (current);
		position++;
	}

	return (NULL);
}

