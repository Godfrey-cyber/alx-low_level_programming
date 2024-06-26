#include <stdio.h>
#include "main.h"
/** main - a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Return (0) always
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
}
