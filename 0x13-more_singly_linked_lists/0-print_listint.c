#include "lists.h"
/**
* print_listint - prints elements of singly linked list
* @h: pointer to structure
* Return: returns size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
