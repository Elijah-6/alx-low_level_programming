#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argc < 3 otherwise 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
