#include "main.h"
/**
 * get_endianness - s function gets the endiannes of the arch
 * Description: The goal is to get the endiannes of the arch
 * section header: the header of this function is holberton.h
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *)&y;

	if (*c)
		return (1);
	return (0);
}
