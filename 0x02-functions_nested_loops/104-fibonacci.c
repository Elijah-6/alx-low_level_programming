#include <stdio.h>

/**
 * main - print the firs 98 fibo
 *
 * Return: return nothing
 */

int main(void)
{
	unsigned long a = 1, b = 2, temp;
	int i;

	printf("%lu, %lu, ", a, b);

	for  (i = 3; i < 98; i++)
	{
		temp = a + b;

		printf("%lu, ", temp);

		a = b;
		b = temp;
	}
	printf("\n");
	return (0);
}

