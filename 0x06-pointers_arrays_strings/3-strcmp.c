#include  <stdio.h>
#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: char to check
 * @s2: char to check
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num] != '\0' && s2[num] != '\0')
	{
		if (s1[num] != s2[num])
		{
			return (s1[num] - s2[num]);
		}
		num++;
	}
	return (0);
}
