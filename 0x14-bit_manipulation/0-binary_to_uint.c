#include "main.h"
/**
 * binary_to_uint -  a function that converts a binary number to an unsigned int.
 * @b: the binary number in string format
 * Description: to convert binary to decimal
 * Return: this return the convert number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome;
	unsinged int original;

	int x;

	outcome = 0;
	x = 0;
	original = 1;

	if (!b)
		return (0);

	while (*(b + x))
	{
		if (*(b + x) != '0' && *(b + x) != '1')
			return (0);
		x++;
	}
	for (x--; x >= 0; x--)
	{
		if (*(b + x) == '1')
			outcome = outcome + original;
		original = original * 2;
	}

	return (outcome);
}
