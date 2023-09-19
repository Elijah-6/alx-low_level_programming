#include <stdio.h>

/**
 * print_array - print the elements of an array
 *
 * @a: array
 *
 * @n: number of elements to print from array
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n - 1; c++)
	{
		printf("%d", a[c]);

		if (c != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
