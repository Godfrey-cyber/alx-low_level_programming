#include "main.h"
#include <stdio.h>
/**
 * more_numbers -  a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *  Return: Return 0
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
