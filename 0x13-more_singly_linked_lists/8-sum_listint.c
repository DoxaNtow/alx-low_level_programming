#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: total of the data in the list
 */
int sum_listint(listint_t *head)
{
	int totalSum = 0;
	listint_t *currentNode = head;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		totalSum += currentNode->n;
	}

	return (totalSum);
}

