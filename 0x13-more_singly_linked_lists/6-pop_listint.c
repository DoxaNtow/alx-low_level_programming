#include "lists.h"

/**
 * pop_listint - removes the first element from a linked list
 * @head: pointer to the pointer to  head of linked list
 *
 * Return: the value of the removed element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int removedValue = (*head)->n;
	listint_t *current = (*head)->next;

	if (head == NULL || *head == NULL)
		return (0);


	free(*head);
	*head = current;

	return (removedValue);
}

