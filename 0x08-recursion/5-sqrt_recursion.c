#include "main.h"
/**
 * _sqrt_helper - helper function to find root.
 *
 * _sqrt_recursion - find the sqrt of n.
 *
 * @n: number to find root of.
 *
 * @guess: first guess for operation.
 *
 * Return: sqrt of n
 */
int _sqrt_helper(int n, int guess)
{
	int square;

	square = guess * guess;
	if (n == square)
		return (guess);
	else if (square > n || guess > n / guess)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - find the square root of a number
 *
 * @n: number to find its square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_helper(n, 1));
}
