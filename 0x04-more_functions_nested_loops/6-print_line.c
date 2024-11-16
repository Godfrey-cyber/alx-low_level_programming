#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a line with a specific length.
 * @n: The number of underscores (_) to print.
 *
 * Description: This function draws a line by printing underscores.
 * If n is less than or equal to 0, it does not print anything.
 */
void print_line(int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        _putchar(95);
    }
    _putchar('\n');
}
