#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: VOID
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int first = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (first != 0)
					printf(", ");
				first = 1;
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
		i++;
	}
	printf("}\n");
}
