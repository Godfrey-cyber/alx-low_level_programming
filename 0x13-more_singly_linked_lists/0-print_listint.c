#include "lists.h"
#include <stdio.h>

/**
 * print_listint -this  function prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Format: see example.
 *
 * Return: elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	/* while we have a pointer to head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
