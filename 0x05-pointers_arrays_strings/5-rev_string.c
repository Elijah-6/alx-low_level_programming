#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: pointer to reverse its value
 *
 * Return: Always 0.
 */


void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
