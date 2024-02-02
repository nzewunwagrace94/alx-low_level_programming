#include "lists.h"

/**
 * get_dnodeint_at_index - it returns the nth node of a linked list.
 * @head: the head as the pointer
 * @index: is the index of the node, starting from 0
 * Return: NULL if the node does not exit
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
