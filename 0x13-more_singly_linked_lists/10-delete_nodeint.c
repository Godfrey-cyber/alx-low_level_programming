#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index -this function deletes the node at index 
 * @head: this is the head of the list
 * @index: the remplacement of the node to be delete
 * Return: a pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int iteration;

	listint_t *now;
	listint_t *nextone;

	if (!head || !*head)
		return (-1);
	now = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(now);
		return (1);
	}
	for (iteration = 0; iteration < (index - 1); iteration++)
	{
		now = now->next;
		if (now == NULL)
			return (-1);
	}
	nextone = now->next;
	now->next = nextone->next;
	free(nextone);
	return (1);
}
