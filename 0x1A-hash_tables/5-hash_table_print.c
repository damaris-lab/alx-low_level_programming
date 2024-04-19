#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	temp = NULL;
	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				break;
			}
		}
		if (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			while (temp != NULL)
			{
				printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}

			for (i = i + 1; i < ht->size; i++)
			{
				if (ht->array[i] != NULL)
					temp = ht->array[i];
				while (temp != NULL)
				{
					printf(", '%s': '%s'", temp->key, temp->value);
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}
