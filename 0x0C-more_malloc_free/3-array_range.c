#include <stdlib.h>
/**
 * array_range - makes an array with numbers
 * @min: start number
 * @max: max num
 *
 * Return: pointer to arr or null
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0, I = 0;
	int diff;

	if (min > max)
		return (NULL);
	diff = max - min;
	a = malloc(sizeof(int) * (diff + 1));
	if (a == NULL)
		return (NULL);
	I = min;
	while (i <= diff)
		a[i++] = I++;

	return (a);
}
