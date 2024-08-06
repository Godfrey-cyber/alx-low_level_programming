#include "lists.h"
/**
 * mystartupfunction - is a function prints a string before the main function is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) mystartupfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
