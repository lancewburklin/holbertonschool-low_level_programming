#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
}
