#include "lists.h"

/**
 * add_node_end - Adds a node to the end of the list
 * @head: Head of the list
 * @str: String for the node
 *
 * Return: Address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	char *name;
	int i = 0;
	list_t *tail = *head;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	name = strdup(str);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->len = i;
	newnode->str = strdup(name);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newnode;
	return (tail);
}
