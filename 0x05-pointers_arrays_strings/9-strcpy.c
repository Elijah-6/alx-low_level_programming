

/**
 * _strcpy - copy str from src to dest
 *
 * @dest: destination.
 * @src: source
 *
 * Return: pointer to dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
