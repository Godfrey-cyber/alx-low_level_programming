#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @s: value to be evaluate
 * Return: not
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
