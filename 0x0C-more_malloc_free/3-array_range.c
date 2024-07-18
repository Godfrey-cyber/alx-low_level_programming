#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - create an array of integers from 0 to 10
 * @min: integer with 0 according to the main
 * @max: integer with 10 according to the main
 * Return: a pointer to the new array or NULL if it fail
 *
 */
int *array_range(int min, int max)
{
	int *array;
	int pos;
	int compete;

	if (min > max)
		return (NULL);
	pos = max - min + 1;
	array = malloc(pos * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (compete = 0; compete < pos; compete++, min++)
		array[compete] = min;
	return (array);
}
