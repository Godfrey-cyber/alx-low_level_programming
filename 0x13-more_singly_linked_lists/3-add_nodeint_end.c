#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -this function adds a new node at the end of,
 * a listint_t list.
 * @head: pointer to the pointer of head of linked list.
 * @n: content to add to the list.
 *
 * Return: the address memory of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *f_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->next = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	while (f_node->next != NULL)
		f_node = f_node->next;
	f_node->next = n_node;
	return (*head);
}
