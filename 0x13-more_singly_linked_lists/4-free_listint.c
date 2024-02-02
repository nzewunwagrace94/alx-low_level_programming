#include "lists.h"


/**
 * free_listint - free a listint_t list
 * @head: the pointer to the head
 * Return: Always 0 on success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
