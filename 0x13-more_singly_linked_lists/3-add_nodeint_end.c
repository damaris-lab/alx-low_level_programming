#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the end of the list
 * @head:pointer to the first node of the list
 * @n:data
 * Return:return the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = ptr;

	return (*head);
}

