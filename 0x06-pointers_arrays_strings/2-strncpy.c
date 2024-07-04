#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: char to check
 * @src: char to check
 * @n: int to check
 * Return: 0 is success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a]; != '\0'; i++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
