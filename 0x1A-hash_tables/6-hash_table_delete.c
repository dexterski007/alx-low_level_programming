#include "hash_tables.h"

/**
 * hash_table_delete - delete table
 *
 * @ht: hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
