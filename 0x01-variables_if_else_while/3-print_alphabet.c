#include <stdio.h>
/**
 *  main -A program that prints uppercase and lowercase alphabet characters
 *  Return: Always 0 (Success) -> 0
 */
int main(void)
{
	char lower_letter;
	char upper_letter;

	for (lower_letter = 97; lower_letter <= 122; lower_letter++)
	{
		putchar(lower_letter);
	}

	for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
	{
		putchar(upper_letter);
	}
	putchar('\n');

	return (0);
}
