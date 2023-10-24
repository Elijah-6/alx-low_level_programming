#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the listint_t linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	size_t i;
	const listint_t *checker;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		checker = head;
		for (i = 0; i < count; i++)
		{
			if (checker == current)
			{
				printf("-> [%p] %d\n", (void *)checker, checker->n);
				exit(98);
			}
			checker = checker->next;
		}

		current = current->next;
	}

	return (count);
}

