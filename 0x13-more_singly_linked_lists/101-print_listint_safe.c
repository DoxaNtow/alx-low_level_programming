#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (head == NULL || head->next == NULL)
	return (0);

	while (fast && fast->next)
	{
	slow = slow->next;
	fast = (fast->next)->next;

		if (slow == fast)
		{
		size_t nodes = 1;

		slow = slow->next;

		while (slow != fast)
		{
			nodes++;
			slow = slow->next;
		}

		return (nodes);
		}
	}

	return (0);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
	printf("[%p] %d\n", (void *)current, current->n);

	nodes++;

	if (current <= current->next)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		break;
	}

	current = current->next;
	}

	return (nodes);
}

