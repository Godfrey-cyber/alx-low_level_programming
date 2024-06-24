#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Returns (0) 
 */
int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		if (numbers != 57)
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');

	return (0);
}
