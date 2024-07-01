#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function tht swaps integers
 * @a - value to be swaped
 * @b - value to be swaped
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*b = *b;
	*b = n;
}
