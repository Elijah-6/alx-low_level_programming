/**
 * is_divisible - find if a number is divisible by another
 *
 * is_prime_number - find if a number is prime
 *
 * @n: number to work on
 * @divisor: divisor
 *
 * Return: 1 if prime and 0 if not.
 *
 */

int is_divisible(int n, int divisor)
{
	if (divisor <= 1)
		return (0);
	else if (n % divisor == 0)
		return (1);
	else
		return (is_divisible(n, divisor - 1));
}
/**
 * is_prime_number - find if n is prime
 *
 * @n: number to find if prime
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
