#include <stdio.h>
#include "main.h"
/**
 * _strcat - this function that concatenates two strings.
 * Return: Returns a pointer to the resulting string dest
 * @dest: char to check
 * @src: char to check
 * Description: This will append the src string to the dest string
 *  Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != "\0"; 1++)
	{
	}
	for (j = 0; src[i] != "\0"; j++; i++)
	{
		dest[i] = sc[j];
	}

	return (dest);
}
