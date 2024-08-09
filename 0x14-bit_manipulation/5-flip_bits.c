#include "main.h"

/**
 * flip_bits - This func counts the number of bits required to be
 *             flipped in order to get from one number to another.
 * @n: The number in use.
 * @m: The number to flip n to.t
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bytes = 0;

	while (xor > 0)
	{
		bytes += (xor & 1);
		xor >>= 1;
	}

	return (bytes);
}
