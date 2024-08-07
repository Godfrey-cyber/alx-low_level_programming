#include <stdlib.h>
#include "main.h"

/**
* free_grid - a function that frees up a 2d grid
* @grid: a pointer to a pointer. a 2d array. a grid
* @height: the height
*
* Description: this part should return the all clear from valgrind
* Return: 0 if it is void:
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL || height <= 0)
		return;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
