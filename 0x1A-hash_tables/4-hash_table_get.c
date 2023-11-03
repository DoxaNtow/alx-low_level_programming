#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to retrieve the associated value.
 *
 * Return: value associated with the key, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0; /* Index within the hash table */
	hash_node_t *node;         /* Current node in the hash table */

	/* Check for invalid inputs */
	if (!ht || !key || !*key)
		return (NULL);

	/* Calculate the index for the key */
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	/* Search for the key in the bucket */
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value); /* Return the associated value */
		node = node->next;
	}

	return (NULL); /* Key not found, return NULL */
}
