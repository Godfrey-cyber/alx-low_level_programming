#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: integer to consider
 *
 * Return: the factorial number of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
