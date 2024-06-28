#include "holberton.h"

/**
* print_diagonal - prints a diagonal line with new line
* @n: an integer variable
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)/* if 0 or negative write newline */
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
