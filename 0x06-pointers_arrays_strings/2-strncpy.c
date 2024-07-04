#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: char to check
 * @src: char to check
 * @n: int to check
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (a = 0; i < n && src[i] != '\0'; i++)
		dest[a] = src[a];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
