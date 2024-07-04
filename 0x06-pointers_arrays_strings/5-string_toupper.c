#include <stdio.h>
#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @p: pointer to char to check
 * Return: 0 is succes
 */
char *string_toupper(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (p[x] >= 97 && p[x] <= 122)
			p[x] -= 32;
	}
	return (p);
}
