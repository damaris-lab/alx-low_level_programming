#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hashtable to update
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: On success 1; Otherwise 0 is returned
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *key_cp;

	if (key[0] == '\0' || ht == NULL)
		return (0);
	key_cp = (const unsigned char *) key;
	index = key_index(key_cp, ht->size);
	if (index >= ht->size)
		return (0);
	if (ht->array[index] == NULL)
		add_node(&ht->array[index], key, value);
	else
		add_node_head(&ht->array[index], key, value);
	return (1);
}
/**
 * add_node - Adds a node in a linked list
 * @head: The head of the list
 * @key: The key
 * @value: The value attached to the key
 *
 * Return: Nothing
 */
void add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new != NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		*head = new;
	}
}
/**
 * add_node_head - adds a node at the beginning of a linked list
 * @head: The head of the list
 * @key: The key
 * @value: the value attached to the key
 *
 * Return: Nothing
 */
void add_node_head(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	int found;

	found = 0;
	temp = *head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			found = 1;
			if (temp->value != NULL)
				free(temp->value);
			temp->value = strdup(value);
			break;
		}
		temp = temp->next;
	}
	if (!found)
	{
		new = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (new != NULL)
		{
			new->key = strdup(key);
			new->value = strdup(value);
			new->next = *head;
			*head = new;
		}
	}
}
