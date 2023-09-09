#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + (i - 10));
	}
	putchar('\n');
	return (0);
}

