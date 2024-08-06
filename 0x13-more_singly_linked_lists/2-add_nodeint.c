#include "lists.h"
/**
 * add_nodeint -this function adds a new node at start of the list_t list
 * @head: double pointer to listint_t
 * @n: the number of elements in listint_t
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	free(node);
	return (NULL);
}
