#include "hash_tables.h"

/**
 * hash_table_get - get table
 *
 * @key: key
 * @ht: hash table
 *
 * Return: NULL or key
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		i++;
	}
	return (NULL);
}
