#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key we're looking for
 *
 * Return: On success, the key is returned
 * Otherwise, the function returns NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
