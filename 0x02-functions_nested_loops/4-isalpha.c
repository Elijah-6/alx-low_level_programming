#include <ctype.h>
/**
 * _isalpha - determine if an alphabet
 *
 * @c: argument to check alpha status
 *
 * Return: return 1 if lower 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
