#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (c <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
