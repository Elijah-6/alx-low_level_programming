#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from number to 98
 *
 * @n: parameter
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ",  n);
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d,\n ", n);
	}
}
