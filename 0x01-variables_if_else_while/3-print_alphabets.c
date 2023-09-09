#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char capital = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
