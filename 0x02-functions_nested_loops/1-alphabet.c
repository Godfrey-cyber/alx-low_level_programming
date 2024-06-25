#include <stdio.h>
/** main - a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Return (0) always
 */

void print_alphabet()
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++) {
		putchar(letter);
	}
}
int main(void)
{
	putchar(print_alphabet());
	return (0);
}
