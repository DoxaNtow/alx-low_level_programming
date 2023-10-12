#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head/entry of the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;

	for (current = head; current != NULL;)
	{
		head = current->next;
		free(current);
		current = head;
	}
}

