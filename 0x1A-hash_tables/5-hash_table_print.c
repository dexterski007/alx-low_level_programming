#include "hash_tables.h"

/**
 * hash_table_print - print table
 *
 * @ht: hash table
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first == 1)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
