#include "lists.h"

/**
 * sum_dlistint - return  sum of all the data (n) of a doubly linked list.
 * @head: Head/entry of the list.
 * Return: Sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int totalSum;

	totalSum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		for (; head != NULL; head = head->next)
		{
			totalSum += head->n;
		}
	}

	return (totalSum);
}

