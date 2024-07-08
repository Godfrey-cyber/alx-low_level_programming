#include "main.h"
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
	int x;
	
	for (x = 0; s[x] != '\0' ; x++)
	{
		if (s[x] == c)
		return (&s[x]);
		x++;
	}
	return (0);
}
