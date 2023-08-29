#include "lists.h"

/**
 * free_listint - frees memory occupied by a linked list
 * @head: listint_t list to be released
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
}

