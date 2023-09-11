#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int a;
	int b;

	while (c <= 99)
	{
		a = (c / 10 + '0');
		b = (c % 10 + '0');

		if (a < b)
		{
			putchar(a);
			putchar(b);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
