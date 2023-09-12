#include <ctype.h>
/**
 * _islower - determine if an alphabet is lowercase
 *
 * Return: return 1 if lower 0 otherwise
 */

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
