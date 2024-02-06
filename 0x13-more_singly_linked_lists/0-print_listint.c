#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h:pointer to the next address of the nodes element
 *Return:return count
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}


