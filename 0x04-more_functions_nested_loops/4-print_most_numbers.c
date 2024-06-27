#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers -	a function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 *  Return: Returns all numbers except 2 & 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
