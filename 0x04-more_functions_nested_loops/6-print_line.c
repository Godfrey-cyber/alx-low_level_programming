#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n - an int
 * Return - Retuns a straight line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
