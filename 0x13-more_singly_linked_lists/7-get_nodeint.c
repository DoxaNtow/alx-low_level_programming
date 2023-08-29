#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;
	listint_t *currentNode = head;

	while (currentIndex < index && currentNode != NULL)
	{
		currentNode = currentNode->next;
		currentIndex++;
	}

	return (currentIndex == index ? currentNode : NULL);
}

