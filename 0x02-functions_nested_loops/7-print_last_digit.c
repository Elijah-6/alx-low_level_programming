#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a given number
 *
 * @n: the given number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = (abs(n % 10));
	_putchar(last + '0');
	return (last);
}
