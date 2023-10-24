#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list
 * and returns the data.
 * @head: Pointer to a pointer to the listint_t linked list
 *
 * Return: The data from the old head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int data;

	if (*head == NULL)
		return (0);

	old_head = *head;
	data = old_head->n;
	*head = old_head->next;
	free(old_head);

	return (data);
}

