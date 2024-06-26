#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: input number as an integer.
 * Return: Will return the last digit.
 */
 int print_last_digit(int number)
{
	{
		int num;
		num = number % 10;
		if (num < 0)
		{
			_putchar(num + 48);
			return (-num);
		}
		else
		{
			_putchar(num + 48);
			return (num);
		}
	}
}

