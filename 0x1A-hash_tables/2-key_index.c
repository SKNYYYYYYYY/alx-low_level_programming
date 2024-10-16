#include "hash_tables.h"
/**
 * key_index - function to return the index of the key in the hash table
 * @key: the key to search
 * @size: the size of the key in bytes
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}

