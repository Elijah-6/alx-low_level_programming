#include "main.h"
/**
 * _strncpy - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: number of chars to add.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
