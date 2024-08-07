#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: a pointer to the head of linked list.
 *
 * with a loop.
 * You should go through the list only once.
 * Return: 1 if addressis  in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL;
	size_t state = 0;

	while (!is_in_nodes(nodes, head))
	{
		if (!add_nodeptr(&nodes, head))
		{
			free_listnode(nodes);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		/* state the nodes */
		state++;
		head = head->next;
	}
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_listnode(nodes);
	return (state);
}

/**
 * add_nodeptr - this function adds a new node at the beginning of a listint_t list
 * @head: this  pointer points to the pointer to the first node
 * @ptr: the value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *node;

	node = malloc(sizeof(listnode_t));
	if (node == NULL)
		return (NULL);
	node->ptr = (listint_t *)ptr;
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * free_listnode -this function  frees a free_listnode list
 * @head: pointer to first node of the list
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * is_in_nodes - checks whether a given address is in a given list
 * @head: first node in the list
 * @ptr: address
 *
 * Return: 1 if address is in nodes. Otherwise 0
 */
int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	if (ptr == NULL)
		return (1);
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
