#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * _putchar - a function that prints the string
 * @s: chaacterr to check
 *
 * Return: 0 is success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
