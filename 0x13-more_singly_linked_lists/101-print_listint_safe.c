#include "lists.h"

/**
 * print_listint_safe - print linked list
 * @head: start of list
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int counter = 0, diff, num;
	void *address;

	while (head != NULL)
	{
		diff = head - head->next;
		counter++;
		num = head->n;
		printf("[%p] %i\n", (void *)head, num);
		if (diff > 0)
			head = head->next;
		else
		{
			address = head->next;
			num = head->next->n;
			printf("-> [%p] %i\n", (void *)address, num);
			break;
		}
	}
	return (counter);
}
