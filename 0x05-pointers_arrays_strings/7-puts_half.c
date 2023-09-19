#include "main.h"

/**
 * puts_half - function to print other half of a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int c = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (c = (len + 1) / 2; c < len; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
