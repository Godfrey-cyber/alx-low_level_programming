#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits.
 * Return: Returns (0)
 */
int main(void)
{
	int num_10;
	int num_1;

	for (num_10 = 0; num_10 <= 9;  num_10++)
	{
		for (num_1 = num_10 + 1; num_1 <= 9; num_1++)
		{
			putchar(num_10 + '0');
			putchar(num_1 + '0');

			if (num_10 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
