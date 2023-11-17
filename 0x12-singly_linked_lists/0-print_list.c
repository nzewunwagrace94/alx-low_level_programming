#include "lists.h"

/**
 * print_list - print all the element in a singly linked list
 * @h: head of the linked list
 * Return: the number of nodes
 *
 * Description: function that prints all the elements of a list
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
