#include <stdio.h>
/**
 * main - prints that prints all possible different combinations of three digits
 * Return: Returns (0)
 */
int main(void)
{
	int number_1;
	int number_2;
	int number_3;

	for (number_1 = 48; number_1 <= 57; number_1++)
	{
		for (number_2 = number_1 + 1; number_2 <= 57; number_2++)
		{
			for (number_3 = number_2 + 1; number_3 <= 57; number_3++)
			{
				putchar(num_1);
				putchar(num_2);
				putchar(num_3);

				if (!(number_1 == 55 && number_2 == 56 && number_3 == 57))
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
