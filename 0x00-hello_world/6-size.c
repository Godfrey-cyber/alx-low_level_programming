#include <stdio.h>
/**
 * main - Entry point for intro to c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char name;
int num;
float floating_num;
long longnum;
long long longint;

	printf("Size of a char: %lu byte(s)\n", sizeof(name));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longnum));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longint));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_num));
}
