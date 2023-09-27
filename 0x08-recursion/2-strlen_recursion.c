
/**
 * _strlen_recursion - print the length of a string.
 *
 * @s : String to be counted
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
