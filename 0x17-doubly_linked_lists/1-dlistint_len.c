#include "lists.h"

/**
 * dlistint_len -a function that returns the number of elements in
 * a double linked list
 *
 * @h: this is the head of the list
 * Return: the number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
