#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
	char character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		putchar(character);
	}
	for (character = 'A' ; character <= 'Z' ; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
