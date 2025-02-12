#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: Size of the hash table.
 *
 * Return: Pointer to the new hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;
	/*Allocate memory for the table*/

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	/*Allocate memory for the array elements*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/*Initialize each element of the array to NULL*/
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
