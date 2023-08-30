#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walker = head;
	listint_t *runner = head;

	if (!head)
	return (NULL);

	while (runner && runner->next)
	{
	walker = walker->next;
	runner = runner->next->next;

	if (walker == runner)
	{
		walker = head;
		while (walker != runner)
		{
			walker = walker->next;
			runner = runner->next;
		}
		return (runner);
	}
	}

	return (NULL);
}

