#include "lists.h"

/**
 * get_dnodeint_at_index - function returns list nth node
 * @head: list head
 * @index: node index starting from 0
 *
 * Return: NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
