
/**
 * _strlen - find the legth of a given string.
 *
 * @s: string
 *
 * Return: Always length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
