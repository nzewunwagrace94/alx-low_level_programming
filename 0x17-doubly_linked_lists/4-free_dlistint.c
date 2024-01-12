#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: the pointer
 * Return: 0 always as success
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
