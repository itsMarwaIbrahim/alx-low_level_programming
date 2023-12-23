#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: Returns a pointer to the newly created hash table
 *      If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int counter = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);

	while (counter < size)
	{
		table->array[counter] = NULL;
		counter++;
	}

	return (table);
}
