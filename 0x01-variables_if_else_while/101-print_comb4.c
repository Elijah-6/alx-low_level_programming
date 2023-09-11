#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int first;
	int second;
	int third;

	while (c <= 999)
	{
		first = (c / 100 + '0');
		second = (c / 10 % 10 + '0');
		third = (c % 10 + '0');

		if ((first < second) && (second < third))
		{
			putchar(first);
			putchar(second);
			putchar(third);

			if (c != 789)
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
