#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function tht swaps integers
 * @a - int to check
 * @b - second int to check
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
