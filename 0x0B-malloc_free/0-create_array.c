#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars and initializes it with char
* @size: the size of the address of memory to print
* @c: the character we are sent.
*
* Description: use malloc and argc argv to achieve goal
*	returns null if size is zero. returns a
*	pointer to the array or NULL if it fails.
* Return: the pointer if successful, NULL if not
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
