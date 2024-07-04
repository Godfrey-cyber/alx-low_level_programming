#include  <stdio.h>
#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @string1: char to check
 * @string2: char to check
 * @n: the number of elements of the array
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		j++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
