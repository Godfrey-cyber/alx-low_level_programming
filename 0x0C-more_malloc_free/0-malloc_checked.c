#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory
 * @b: an int contains the size of the memory we want allocated
 * Description: exit with a status of 98 if failed
 * Return: the pointer to the allocated memory or a exit of 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
