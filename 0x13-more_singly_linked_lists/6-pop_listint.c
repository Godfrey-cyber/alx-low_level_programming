#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - this function removes the head of the list and returns its contents
 * @head: this is the  head of the list
 * Return: data of head
 */
int pop_listint(listint_t **head)
{
	int iteration;
	listint_t *real;
	listint_t *host;

	if (head == NULL)
		return (0);
	host = real = *head;
	if (*head)
	{
		iteration = real->n;
		*head = real->next;
		free(host);
	}
	else
		iteration = 0;
	return (iteration);
}
