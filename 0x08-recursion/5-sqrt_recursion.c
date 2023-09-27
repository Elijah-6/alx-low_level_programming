#include "main.h"
/**
 * _sqrt_recursion - find the sqrt of n
 *
 * _sqrt_helper - helper function to find root
 *
 * Return: sqrt of n
 */
int _sqrt_helper(int n, int guess)
{
	int square;

	square = guess * guess;
	if ( n == square)
		return (guess);
	else if (square > n || guess > n / guess)
		return (-1);
	else
		return _sqrt_helper(n, guess + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_helper(n, 1));
}
