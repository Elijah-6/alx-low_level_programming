/**
 * string_toupper - change all lowercase to uppercase
 * @s: string to transform
 * Return: pointer to transformed string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (s);
}
