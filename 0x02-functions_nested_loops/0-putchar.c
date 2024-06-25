#include "main.h"
/**
 * main - a program that prints _putchar, followed by a new line.
 * Return: Returns (0) Success
 */
int main(void)
{	
	int i;
	char name[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(name[i]);
	}
	putchar("\n");
	return (0);
}
