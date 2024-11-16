#include "main.h"

/**
 * more_numbers func - prints numbers
 * between 0 to 14 10 times.
 * Return: there is no return.
 */
void more_numbers(void)
{
    int index, character;

    for (index = 0; index < 10; index++)
    {
        for (character = 0; character < 15; character++)
        {
            if (character >= 10)
                _putchar((character / 10) + 48);
            _putchar((character % 10) + 48);
        }
        _putchar('\n');
    }
}
