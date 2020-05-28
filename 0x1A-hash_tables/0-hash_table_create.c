#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Size of the hash table
 *
 * Return: The hash table or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);
	if (size < 1)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->size = size;
	return (new_hash);
}
