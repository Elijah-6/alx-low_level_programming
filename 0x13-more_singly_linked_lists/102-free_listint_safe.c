#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the listint_t linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	size_t size = 0;
	listint_t *current;
	listint_t *temp;
	listint_t *runner;

	current = *h;

	while (current != NULL)
	{
		size++;
		runner = *h;
		*h = (*h)->next;
		temp = current->next;
		free(current);
		current = temp;

		for (i = 0; i < size; i++)
		{
			if (current == runner)
			{
				*h = NULL;
				return (size);
			}
			runner = runner->next;
		}
	}

	*h = NULL;
	return (size);
}

