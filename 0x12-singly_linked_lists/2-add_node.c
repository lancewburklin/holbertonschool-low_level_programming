#include "lists.h"

/**
 * add_node - Adds a node to a list
 * @head: Head of the list
 * @str: String to add
 *
 * Return: Address to new list item
 */

list_t *add_node(list_t **head, const char *str)
{
	char* name = strdup(str);
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = name;
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
