#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
