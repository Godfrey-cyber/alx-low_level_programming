#include "lists.h"
/**
 * insert_nodeint_at_index - i function that inserts a new node at a given position
 * @head: this is a double pointer to the head of the listint list
 * @idx: this is the index of the list where the new node should be added
 * @n: this is the content
 * Return: Null if it failed or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h_f, *n_node;

	unsigned int amount = 0;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	h_f = *head;
	while (h_f != NULL && amount != idx - 1)
	{
		amount++;
		h_f = h_f->next;
	}
	if (amount == idx - 1 && h_f != NULL)
	{
		n_node->next = h_f->next;
		h_f->next = n_node;
		return (n_node);
	}
	free(n_node);
	return (NULL);
}
