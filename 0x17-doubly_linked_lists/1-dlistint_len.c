#include "lists.h"
/**
 * dlistint_len - return the number of elements in list
 * @h: head of the node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
