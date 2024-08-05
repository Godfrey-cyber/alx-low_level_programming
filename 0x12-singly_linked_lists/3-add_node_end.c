#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a double pointer to list_t
 * @str: a pointer to the first node in list_t
 * Return: a poitner to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int racer;
	list_t *new-last_node;
	list_t *first_node;

	new-last_node = malloc(sizeof(list_t));
	racer = 0;
	if (new-last_node)
	{
		new-last_node->str = strdup(str);
		if (!new-last_node->str || !str)
		{
			free(new-last_node);
			return (NULL);
		}
		while (new-last_node->str[racer])
			racer++;
		new-last_node->next = NULL;
		new-last_node->len = rucer;
		if (!*head)
		{
			*head = new-last_node;
			return (new-last_node);
		}
		first_node = *head;
		while (first_node->next)
			first_node = first_node->next;
		first_node->next = new-last_node;
		return (new-last_node);
	}
	return (NULL);
}
