#include "lists.h"

/**
 * print_dlistint - prints all  elements of a double list.
 * @h:head
 *
 *Return:return number of nonodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp;

	temp = h;
	if (h == NULL)
		return (size);
	while (temp)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
