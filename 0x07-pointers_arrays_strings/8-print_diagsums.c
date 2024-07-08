#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of square
 * @a: pointer to an integer
 * @size: int type
 * Description: this function print the chessboard
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag1;
	int diag2;
	int v;

	for (z = 0; z < size; z++)
	diag1 = diag1 + a[(size + 1) * z];
	for (z = 1; z < size + 1; z++)
	diag2 = diag2 + a[(size - 1) * z];
	printf("%d, %d\n", diag1, diag2);
}
