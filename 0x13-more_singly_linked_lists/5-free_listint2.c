#include "lists.h"
/**
 * free_listint2 - this function frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *x_head;

	if (head == NULL)
		return;

	x_head = *head;
	while (x_head)
	{
		x_head = x_head->next;
		free(*head);
		*head = x_head;
	}
	/* task condition */
	*head = NULL;
}
