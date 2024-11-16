#include <stdio.h>

/**
* main - fizz bizz holterton style
* Description: Uses headers to link and a nested loops to achieve goal
* fizz buzz from 1-100. print fizz for multiples of 3 and buzz for
* multiples of 5 and fizzbuzz for multiples of both eg. 15
* could use a switch for neater and better code
* Return: 0 if no errors
*/

int main(void)
{
    int index;

    for (index = 1; index <= 100; index++)
    {
        if (index % 3 == 0 && index % 5 == 0)
            printf("FizzBuzz");
        else if (index % 3 == 0)
            printf("Fizz");
        else if (index % 5 == 0)
            printf("Buzz");
        else
            printf("%d", index);
        if (index != 100)
            printf(" ");
    }
    printf("\n");
    return (0);
}
