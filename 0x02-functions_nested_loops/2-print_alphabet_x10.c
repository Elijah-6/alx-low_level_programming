#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
