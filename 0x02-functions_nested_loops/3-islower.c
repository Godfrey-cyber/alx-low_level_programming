#include <stdio.h>
#include "main.h"
/**
 * _islower - is Shows 1 if the input is a lowercase character
 * @c: The character in ASCII code
 * Return - Returns 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
