#include <stdio.h>

/**
* main - a progrm that prints alphabets in lowercase, then in uppercase
* Return: 0
**/

int main(void)
{
	char lowercase_letter;
	char uppercase_letter;

	for (lowercase_letter = 97; lowercase_letter <= 122; lowercase_letter++)
	{
		putchar(lowercase_letter);
	}

	for (uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++)
	{
		putchar(uppercase_letter);
	}
	putchar('\n');

	return (0);
}
