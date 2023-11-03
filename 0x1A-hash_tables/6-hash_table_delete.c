#include "hash_tables.h"

/**
 * hash_table_delete - Frees the hash table and all its nodes.
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *current;  /* Current node and node to free */
	unsigned long int index = 0;  /* Index within the hash table */

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			current = node;
			node = node->next;
			if (current->key)
				free(current->key);
			if (current->value)
				free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
