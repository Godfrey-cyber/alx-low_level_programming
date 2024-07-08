#include "main.h"
#include <stdio.h>
/**
 * char *_memcpy - prints buffer in hexa
 * @b: the address of memory to print
 * @n: unsigned int to be changed
 * @s: the size of the memory to print
 * Return: changed array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
