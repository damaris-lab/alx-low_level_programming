#include "lists.h"

/**
 * delete_dnodeint_at_index - dletes node at an index on a list
 * @head:pointer to the first node
 * @index:index to add a node
 * Return: return -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	if (*head == NULL)
	{
		(*head)->prev = NULL;
		return (1);
	}
	count = 0;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-10);
	temp->prev->next = temp->next;
	if (temp->next == NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
