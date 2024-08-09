#include "main.h"
/**
 * print_binary - a function converts decimal to binary without use / %
 * @n: the decimal
 * Description: convert decimal to binary
 * section header: the header of this function is holberton.h
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	int stop = 0;
	unsigned long int stop2 = 1;

	stop2 <<= 63;
	if (n == 0)
		_putchar('0');

	while (stop2 > 0)
	{
		if ((n & stop2) == 0 && stop == 1)
			_putchar('0');
		if ((n & stop2) != 0)
		{
			_putchar('1');
			stop = 1;
		}

		stop2 = stop2 >> 1;
	}
}
