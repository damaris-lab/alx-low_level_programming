#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adda a node at the begning of a list
 * @head:head pointer
 * @n: data of the new node
 * Return: address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->data = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (head)
		*head->prev = next;
	*head = newnode;
	return (*head);
}
