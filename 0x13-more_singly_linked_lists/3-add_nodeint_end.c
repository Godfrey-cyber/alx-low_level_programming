#include "lists.h"
/**
 * add_nodeint_end - a function thaat adds a new node at the end of a listint_t list
 * @head: double pointer to listint_t
 * @n: number of elements in listint_t
 * Return: a poitner to the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_end;
	listint_t *f_node;

	n_end = malloc(sizeof(listint_t));
	if (n_end)
	{
		n_end->next = NULL;
		n_end->n = n;
		if (!*head)
		{
			*head = n_end;
			return (n_end);
		}
		f_node = *head;
		while (f_node->next)
			f_node = f_node->next;
		f_node->next = n_end;
		return (n_end);
	}
	free(n_end);
	return (NULL);
}
