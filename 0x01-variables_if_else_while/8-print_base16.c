#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase, and a new line
 * Return: Always returns (0)
 */
int main(void)
{
	char base16num;

	for (base16num = '0'; base16num <= '9'; base16num++)
	{
		putchar(base16num);
	}

	for (base16num = 'a'; base16num <= 'f'; base16num++)
	{
		putchar(base16num);
	}

	putchar('\n');

	return (0);

}
