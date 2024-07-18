#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (ptr);
}
