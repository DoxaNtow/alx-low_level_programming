#include "hash_tables.h"

#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *val_copy, *key_copy;
	hash_node_t  *bucket, *new_nd;

	if (!ht || !key || !*key || !value)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = val_copy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_nd = calloc(1, sizeof(hash_node_t));
	if (new_nd == NULL)
	{
		free(val_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new_nd->key = key_copy;
	new_nd->value = val_copy;
	new_nd->next = ht->array[idx];
	ht->array[idx] = new_nd;
	return (1);
}
