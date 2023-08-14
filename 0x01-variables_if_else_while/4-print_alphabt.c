#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabet letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 ׀׀ n == 122)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
