#include "lists.h"

/**
 * sum_listint - Finds the sum of a list of ints
 * @head: Head of the list
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
