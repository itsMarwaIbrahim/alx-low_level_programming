#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *n, *h;

	if (!ht)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);

	n->key = strdup(key);
	n->value = strdup(value);
	n->next = NULL;

	if (ht->array[i])
	{
		h = ht->array[i];
		if (strcmp(key, h->key) != 0)
		{
			n->next = h;
			ht->array[i] = n;
		}
		else
			h->value = strdup(value);
	}

	else
		ht->array[i] = n;

	return (1);
}
