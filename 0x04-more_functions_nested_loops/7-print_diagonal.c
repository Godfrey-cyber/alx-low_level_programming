#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: an integer
 * Return: void. no return0.
 */
void print_diagonal(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
