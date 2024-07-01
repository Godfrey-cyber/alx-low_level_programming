#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function tht swaps integers
 * @a - value to be evaluated
 * @b - value to be evaluated
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
