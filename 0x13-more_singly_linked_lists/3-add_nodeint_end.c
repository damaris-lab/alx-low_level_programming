#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the end of the list
 * @head:pointer to the first node of the list
 * @n:data
 * Return:return the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	temp ->n = n;
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
