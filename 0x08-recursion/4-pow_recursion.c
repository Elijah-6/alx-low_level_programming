/**
 * _pow_recursion -  find recursively the power of x to y
 *
 * @x: base
 *
 * @y: exponent
 *
 * Return: the value of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
