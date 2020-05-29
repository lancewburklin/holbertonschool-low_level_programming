#include "hash_tables.h"

/**
 * hash_table_get - Gets the value of a hash table
 * @ht: Hash table
 * @key: The key, the key to my heart
 *
 * Return: The value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;
	const char *test = "";

	if (ht == NULL || strcmp(key, test) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
