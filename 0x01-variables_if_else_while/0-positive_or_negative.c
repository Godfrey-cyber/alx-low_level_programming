#include <sdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -  entry point for the main code block
 * Return statement - returns 0 -success
 * /
 int main(void)
 {
 	int n;
	srand(time(0));
	n = srand() - RAND_MAX / 2;
	if(n === 0)
		print("%d is zero\n", n);

	else if(n < 0);
		print("%d is negative\n", n);
	else
		print("%d is positive\n", n);

	return (0);
}
