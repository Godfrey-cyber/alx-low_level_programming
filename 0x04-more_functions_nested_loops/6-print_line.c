#include "main.h"

/**
  *print_line - draws a straight line in the terminal
  *only use _putchar function to print
  *@n: an int given by main
  *line should end with a \n
  *if n is 0 or less, function should only print \n
  *Return: success
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
