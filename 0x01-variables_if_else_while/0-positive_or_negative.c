#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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