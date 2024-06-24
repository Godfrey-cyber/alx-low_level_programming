#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always returns (0)
 */
int main(void)
{
	char base16num;
	int base16char;

	for (base16num = 0; base16num <= 9; base16num++)
	{
		putchar(base16num);
	}

	for (base16char = 'a'; base16char <= 'f'; base16char++)
	{
		putchar(base16char);
	}

	putchar('\n');

	return (0);

}
