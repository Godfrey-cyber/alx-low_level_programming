#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more info about headers goes there */

/* betty style doc for function main goes there */

 int main(void)
 {
	/*This program will assign a random number to the variable n each time it is executed.*/
 	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*logic goes in here*/
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
 }
