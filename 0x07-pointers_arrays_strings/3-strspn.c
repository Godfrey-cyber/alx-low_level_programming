#include "main.h"
#include <stdio.h>
/**
 * int _strspn - this function that gets the length of a prefix substring.
 * @accept: pointer to get the bytes
 * @s: pointer to string char type
 * Return: Returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			break;
	}
	return (a);
}
