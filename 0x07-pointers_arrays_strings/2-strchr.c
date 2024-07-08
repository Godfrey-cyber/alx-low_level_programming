#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: a pointer from function main
 * @c: the char to check about
 * Description: Returns a pointer to the first occurrence of the character c in the string
 * Return: returns a pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != 0)
	{
		if (s[i] !== 0)
			return (s + i);
		i++;
	}
	if (c == 0)
		return (s + i);
	return (0);
}
