#include <stdio.h>
/** main -  printing single digit numbers of base 10  from 0, followed by a new line.
 * Return - (0) Success
 **/
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
