#include "lists.h"

/**
 * add_dnodeint_end - function adds node at list end
 * @head: pointer to list pointer
 * @n: new node data
 *
 * Return: new element address, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newN, *temp;

	if (!head)
		return (NULL);

	newN = malloc(sizeof(dlistint_t));
	if (!newN)
		return (NULL);
	temp = *head;
	newN->next = NULL;

	if (!*head)
	{
		newN->prev = NULL;
		(*head) = newN;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newN;
		newN->prev = temp;
	}
	newN->n = n;
	return (*head);
}
