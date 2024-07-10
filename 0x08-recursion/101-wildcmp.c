#include "main.h"
#include <stdio.h>
/**
* wildcmp - Entry point of the main code
* @s1: character to work with
* @s2: character to work with 
* Return: Always 0 (Success)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 != '*')
		return (0);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
