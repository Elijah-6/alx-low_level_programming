#include "main.h"

/**
 * _atoi - atoi
 *
 * @s: string to convert to int
 *
 * Return: integer in strings
 */
int _atoi(char *s)
{
	short boolean;
	int i, sign, result;

	i = result = boolean = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}
