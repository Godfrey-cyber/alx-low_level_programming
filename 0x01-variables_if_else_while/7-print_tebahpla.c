#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse, and a new line
 * Return: Returns (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
