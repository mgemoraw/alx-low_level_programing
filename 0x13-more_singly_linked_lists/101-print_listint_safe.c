#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 * Return: lenber of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (len);
}
