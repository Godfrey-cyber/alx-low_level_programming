#include <stdio.h>
#include "main.h"
/**
 * is_upper - a function that checks for uppercase character
 * @c - variable character
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
