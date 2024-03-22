#include "lists.h"

/**
 * free_dlistint - function frees list
 * @head: pointer to a first node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	temp = head;
	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
