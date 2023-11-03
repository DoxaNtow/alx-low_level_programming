#include "hash_tables.h"

/**
 * hash_table_print - Prints the key:value pairs from hash table.
 * @ht: Pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int not_finished = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (not_finished)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			not_finished = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
