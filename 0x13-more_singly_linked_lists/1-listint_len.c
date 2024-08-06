#include "lists.h"
/**
 * listint_len -this function  prints the number of elements in listint_t list
 * @h: constant pointer type list_t
 *
 * Return: the total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
