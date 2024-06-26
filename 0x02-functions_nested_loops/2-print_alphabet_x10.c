#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		int letter;
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar("\n");
	}
}
