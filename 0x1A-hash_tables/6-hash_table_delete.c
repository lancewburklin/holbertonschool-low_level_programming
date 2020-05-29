#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: VOID
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *prev;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				prev = temp;
				temp = temp->next;
				if (prev->value != NULL)
					free(prev->value);
				if (prev->key != NULL)
					free(prev->key);
				free(prev);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
