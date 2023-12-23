#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 *      or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *n;

	if (!ht)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[i])
		return (NULL);

	n = ht->array[i];

	for (; n ;)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);

		n = n->next;
	}

	return (NULL);
}
