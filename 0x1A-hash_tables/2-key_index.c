#include "hash_tables.h"

/**
 * key_index - Calculates the index of the key.
 * @key: The key to calculate the index of.
 * @size: The size of the array.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
