#include "lists.h"

/**
 *  *add_nodeint - adds node at the begining of the list
 *  @head:pointer address to the first node
 *  @n:data
 *  Return: new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);

}

