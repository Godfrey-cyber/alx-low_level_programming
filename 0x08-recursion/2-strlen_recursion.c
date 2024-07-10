#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: pointer to a char to consinder
 *
 * Return: 0 is success
 */
int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		x = _strlen_recursion(s + 1);
	}
	return (x + 1);
}
