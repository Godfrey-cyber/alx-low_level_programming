#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (x = 0; x < s; x += size + 1)
	{
		tl += a[x];
	}

	for (x = size - 1; x < s - 1; x += size - 1)
	{
		tr += a[x];
	}

	printf("%d, %d\n", tl, tr);
}
