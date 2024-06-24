#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse, and a new line
 * Return: Returns (0) Success
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet >= 'z'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
