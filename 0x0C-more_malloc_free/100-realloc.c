#include <stdlib.h>
#include "main.h"

/**
* copyit- a helper function that copies over a string
* @ptr: a pointer. the original og array
* @pointer: the new pointer we want
* @old_size: the size of the old stuff cause we want to copy that
*
* Description: copies the old pointer into the new pointer
* Return: nothing it is void.
**/
void copyit(char *ptr, char *pointer, int old_size)
{
	if (old_size)
	{
		*p = *ptr;
		copyit(ptr + 1, p + 1, old_size - 1);
	}
}
