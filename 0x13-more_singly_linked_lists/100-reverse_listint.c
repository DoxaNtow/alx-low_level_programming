#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *currentNode = *head;
	listint_t *nextNode = NULL;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}

	*head = prevNode;

	return (*head);
}

