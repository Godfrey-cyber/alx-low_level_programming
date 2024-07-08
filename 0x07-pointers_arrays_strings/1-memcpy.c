#include "main.h"
#include <stdio.h>
/**
  * char *_memcpy - a function that copies memory area
  * @dest: char to check
  * @src: char to check
  * @n: unsigned int to check
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
