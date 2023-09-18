#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: pointer to reverse its value
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end > s)
	{
		end--;
		_putchar(*end);
	}
	_putchar('\n');
}
