#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -  a function that prints every minute of the day of Jack Bauer.
 * Return - Returns (0) Always.
 */
void jack_bauer(void)
{
	int a, b, c, d;
	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
						break;
						_putchar(a);
						if (a >= 50 && b >= 52)
						break;
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_puchar("\n")
				}
			}
		}
	}
}
