#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to  head/entry point of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
    if (head == NULL)
        return;

    for (; head->next; head = head->next)
    {
        free(head->prev);
    }
    free(head);
}

