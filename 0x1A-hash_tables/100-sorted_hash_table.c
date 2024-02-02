#include "hash_tables.h"

/**
 * shash_table_create - create hash tables
 *
 * @size: hash table size
 *
 * Return: pointer to new Hash table
 */

shash_table_t *shash_table_create(unsigned long int size)

{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);

}

/**
 * shash_table_set - set table
 *
 * @key: key
 * @ht: hash table
 * @value: value
 *
 * Return: 1 or 0 if not succeeded
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}

/**
 * shash_table_get - get table
 *
 * @key: key
 * @ht: hash table
 *
 * Return: NULL or key
 */


char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nod;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nod = ht->array[index];

	while (nod && strcmp(nod->key, key) != 0)
		nod = nod->next;

	if (nod == NULL)
		return (NULL);

	return (nod->value);
}

/**
 * shash_table_print - print table
 *
 * @ht: hash table
 */


void shash_table_print(const shash_table_t *ht)
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


/**
 * shash_table_print_rev - print table
 *
 * @ht: hash table
 */
REVERSE

void shash_table_print_rev(const shash_table_t *ht)
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

#include "hash_tables.h"

/**
 * shash_table_delete - delete table
 *
 * @ht: hash table
 */


void shash_table_delete(shash_table_t *ht)
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

