#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there*/

/**
 *  main - entry point
 *  Description : Prints if number is positive, zero or negative
 *  Return : always 0 (success)
 *
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
