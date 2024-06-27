#include <stdio.h>
#include "main.h"
/**
 * is_upper - a function that checks for uppercase character
 * @c - variable character
 * Return: Returns 0 
 */
int is_upper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1)	;
	}
	else
		return (0);
}
