#include "hash_tables.h"

/**
 * hash_table_set - Sets a hash table
 * @ht: The table
 * @key: The key
 * @value: What the key hold
 *
 * Return: 1 or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int idx;
	hash_node_t **hash_array;
	const char *test = "";

	if (ht == NULL)
		return (0);
	if (key == test)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	hash_array = ht->array;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (hash_array[idx] != NULL)
	{
		current = hash_array[idx];
		while (current != NULL)
		{
			if (strcmp(hash_array[idx]->key, key) == 0)
			{
				free(hash_array[idx]->value);
				hash_array[idx]->value = strdup(value);
				free(new_node);
				return (1);
			}
		}
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = hash_array[idx];
		hash_array[idx] = new_node;
		return (1);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	hash_array[idx] = new_node;
	return (1);
}
