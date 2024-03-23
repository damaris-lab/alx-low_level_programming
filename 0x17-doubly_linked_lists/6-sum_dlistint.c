#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in a list
 * @head:pointer to the first node
 * Return:0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


