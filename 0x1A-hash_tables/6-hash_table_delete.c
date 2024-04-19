#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			free_element(ht->array[i]);
		}
		free(ht->array);
		free(ht);
		ht = NULL;
	}
}
/**
 * free_element - frees a bucket of the hash table
 * @list: The head of the bucket
 *
 * Returns: Nothing
 */

void free_element(hash_node_t *list)
{
	hash_node_t *temp;

	while (list != NULL)
	{
		if (list->key != NULL)
			free(list->key);
		if (list->value != NULL)
			free(list->value);
		temp = list->next;
		free(list);
		list = temp;
	}
}
