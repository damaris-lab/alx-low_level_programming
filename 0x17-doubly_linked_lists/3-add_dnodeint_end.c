#include <stdio.h>
#include <stdlib.h>

/**
 * *add_dnodeint_end - adds node at the end of a list
 * @head:pointer to the first node
 * @n: data value of the node to be added
 * Return:address of the new element,NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->data = n;
	newnode->next NULL;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	*temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (*head);
}


