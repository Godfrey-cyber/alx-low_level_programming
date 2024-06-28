#include "main.h"

/**
* print_most_numbers -  prints the numbers except 2 and 4.
* Description: headers to link and a nested loops to achieve goa
* Return: void. no return.
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
