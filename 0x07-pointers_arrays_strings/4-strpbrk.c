#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - this function that searches a string for any of a set of bytes.
 * @accept: pointer to get the bytes
 * @s: string
 * Return: a pointer to s matchin bytes or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&(s[i]));
		}
	}
	return (0);
}
