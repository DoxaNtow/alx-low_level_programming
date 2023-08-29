#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n; /* Assign the data 'n' to the 'n' field of the new node*/
	new_n->next = *head; /* Set next field of new node to current head*/
	*head = new_n; /* Update the head pointer to point to the new node*/


	return (new_n);
}

