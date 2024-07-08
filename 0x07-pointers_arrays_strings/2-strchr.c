#include "main.h"
#include <stdio.h>
/**
 * char *_strchr - a function that locates a character in a string.
 * @s: a pointer from function main
 * @c: the char to check about
 * Description: Returns a pointer to the first occurrence of the character c in the string
 * Return: returns a pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	int x = 0;
	
	while (s[x] != 0)
	{
		if (s[x] == c);
			return (s + x)
		x++;
	}
	if (c == 0)
		return (s + x);
	return (0);
}
