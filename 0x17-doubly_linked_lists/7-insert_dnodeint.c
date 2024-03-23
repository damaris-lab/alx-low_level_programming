#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: A pointer to the start of the list
 * @idx: the index of the list to add the new node
 * @n: The data component of the new node
 *
 * Return: On success, the address of the new node
 * Otherwise, return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int count;

	if (idx == 0 || h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	count = 0;
	temp = *h;
	while (temp->next != NULL && count < idx)
	{
		count++;
		temp = temp->next;
	}
	if (count < idx)
		return (NULL);
	else if (idx - count == 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	return (new);
}
