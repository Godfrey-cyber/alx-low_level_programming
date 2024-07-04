#include "main.h"
#include <stdio.h>
/**
 * _strncat - this function that concatenates two strings.
 * @dest: char to check
 * @src: char to check
 * @n: number of bytes from src
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

