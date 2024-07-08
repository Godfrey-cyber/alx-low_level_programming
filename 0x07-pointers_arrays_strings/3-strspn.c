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
	int x;
	int y;
	unsigned int len;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' && accept[y] !=s[x]; y++)	
		if (s[x] == accept[y])
			len++;
		if (accept[y] == '\0')
			return (len);
	}
	return (len);
}
