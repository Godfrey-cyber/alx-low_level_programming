#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - this function prints the chessboard.
 * @a: pointer to array
 * Description: this print the chessboard
 * Return: a char
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
