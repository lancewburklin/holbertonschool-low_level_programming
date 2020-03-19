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
	char *name;
	list_t *newnode;
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	name = strdup(str);
	newnode->str = name;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
