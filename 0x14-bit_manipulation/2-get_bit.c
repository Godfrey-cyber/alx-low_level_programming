#include "main.h"
/**
 * get_bit - a function that return one bit
 * @n: the number
 * @index: the position from where to read the bit
 * Description: return 1 bit
 * section header: the header of this function is main.h
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int byte;

	if (index > 64)
		return (-1);

	byte = n >> index;

	return (byte & 0x1);
}
