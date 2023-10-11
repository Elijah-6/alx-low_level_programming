#include "function_pointers.h"

/**
  * int_index - find index of integer.
  * @array: array to work on.
  * @size: size of array.
  * @cmp: compare values
  *
  * Return: index of matching value.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
