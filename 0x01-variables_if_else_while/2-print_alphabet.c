#include <stdio.h>
/**
 * main - Entry point of the main function that prints alphabet characters
 * Return: Always 0 (Success) -> 0
 */
int main(void)
{
	char alpha_letter;
	for(alpha_letter = 'a'; alpha_letter < 'z'; alpha_letter++)
	{
		putchar(alpha_letter);
	}
	putchar('\n');
	return (0);
}
