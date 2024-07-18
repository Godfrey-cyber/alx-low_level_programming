#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements we want to allocate a space in memory
 * @size: is the size in bytes of each of those elements
 *
 * Return: a pointer to newlly alocated memory or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		/* set the pointer to 0 */
		pointer[x] = 0;
	return (pointer);
}
