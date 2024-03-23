#include "lists.h"

/**
 * add_dnodeint - function adds a new node at list beginning
 * @head: pointer to a list pointer
 * @n: node data
 *
 * Return: address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
