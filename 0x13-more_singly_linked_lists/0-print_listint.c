#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all elements of a list_t list
 * @h: singly linked list print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t index;

	for (index = 0; h; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
