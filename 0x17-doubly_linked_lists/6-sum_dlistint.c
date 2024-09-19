#include "lists.h"

/**
 * sum_dlistint -a function that returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: the head of the list
 * Return: sum of the info
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
