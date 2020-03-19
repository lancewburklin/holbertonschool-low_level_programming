#include "lists.h"

/**
 * print_list - Prints a linked list!
 * @h: The head of the list to print.
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			num++;
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			num++;
		}
		h = h->next;
		printf("\n");
	}
	return (num);
}
