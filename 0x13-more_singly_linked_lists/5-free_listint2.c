#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the listint_t list to be deallocated
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL;
}


