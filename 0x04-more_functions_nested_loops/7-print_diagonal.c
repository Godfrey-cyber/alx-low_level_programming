#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: an integer
 * Return: void. no return0.
 */
void print_diagonal(int n)
{
	int 1, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)

		{
			_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
}
