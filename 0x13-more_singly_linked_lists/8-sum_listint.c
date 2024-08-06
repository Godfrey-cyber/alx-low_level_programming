#include "lists.h"
/**
 * sum_listint - a function that sums all elements of a list
 * @head: this pointer points to the head of the list
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	for (total; head; total += head->n, head = head->next)
		;
	return (total);
}
