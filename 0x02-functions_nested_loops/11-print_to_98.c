#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *             seperated by comma, followed
 *             by space and number should be
 *             printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d. ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d. ", n);
	printf("98\n");
}
