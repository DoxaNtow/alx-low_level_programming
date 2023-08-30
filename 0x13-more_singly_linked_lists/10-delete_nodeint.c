#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in linked list at a certain index
 * @head: pointer to the pointer to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if Success, and -1 when Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *nodeToDelete;
	unsigned int currentIndex;

	if (!head || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nodeToDelete = *head;
		*head = (*head)->next;
		free(nodeToDelete);
		return (1);
	}

	prevNode = *head;
	for (currentIndex = 0; currentIndex < index - 1; currentIndex++)
	{
	if (!prevNode || !(prevNode->next))
		return (-1);
	prevNode = prevNode->next;
	}

	nodeToDelete = prevNode->next;
	prevNode->next = nodeToDelete->next;
	free(nodeToDelete);

	return (1);
}

