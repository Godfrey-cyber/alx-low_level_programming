#include <stdio.h>
/**
 * main - Entry point of the main function that prints alphabet characters
 * Return: Always 0 (Success) -> 0
 */
int main(void)
{
	char alpha_letter;

	for (alpha_letter = 97; alpha_letter < 122; alpha_letter++)
	{
		putchar(alpha_letter);
	}

	putchar('\n');

	return (0);
}
