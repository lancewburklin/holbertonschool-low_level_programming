#include "hash_tables.h"

/**
 * key_index - The index for the key
 * @key: The key to index
 * @size: Size of the array
 *
 * Return: The key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key = hash_djb2(key);

	hash_key = hash_key % size;
	return(hash_key);
}
