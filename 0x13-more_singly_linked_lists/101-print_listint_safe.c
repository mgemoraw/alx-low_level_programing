#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 * Return: lenber of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int dnum;

	while (head != NULL)
	{
		dnum = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dnum > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes);
}
