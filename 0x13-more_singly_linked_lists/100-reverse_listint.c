#include "lists.h"
/**
 * reverse_listint - this function reverses a listint_t linked list
 * @head: a double pointer to the  head
 * Return: a pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = *subsequent = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		subsequent = (*head)->next;
		(*head)->next = before;
		before = (*head);
		(*head) = subsequent;
	}
	(*head) = before;
	return (*head);
}
