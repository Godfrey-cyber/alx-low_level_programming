#include <stdio.h>
#include "main.h"
/**
 * reverse_array -  a function that reverses the content of an array of integers.
 * @n: number of elements of an array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int w, b, c;

	for ((w = 0; b = n - 1); w < b; w++, b--)
	{
		c = a[w];
		a[w] = a[b];
		a[b] = c;
	}
}
