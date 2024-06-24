#include <stdio.h>
/**
* main - a progrm that prints alphabets in lowercase, then in uppercase
* Return: 0
**/

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
