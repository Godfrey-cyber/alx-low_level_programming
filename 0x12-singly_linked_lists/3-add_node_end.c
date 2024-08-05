#include "lists.h"
/**
 * add_node_end -a function that adds a new node at the end of a list_t list
 * @head: a double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int runner;
	list_t *new_end_node;
	list_t *firstnode;

	new_end_node = malloc(sizeof(list_t));
	runner = 0;
	if (new_end_node)
	{
		new_end_node->str = strdup(str);
		if (!new_end_node->str || !str)
		{
			free(new_end_node);
			return (NULL);
		}
		while (new_end_node->str[runner])
			runner++;
		new_end_node->next = NULL;
		new_end_node->len = runner;
		if (!*head)
		{
			*head = new_end_node;
			return (new_end_node);
		}
		firstnode = *head
		while (firstnode->next)
			firstnode = firstnode->next;
		firstnode->next = new_end_node;
		return (new_end_node);
	}
	return (NULL);
}
