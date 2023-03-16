#include "lists.h"

/**
 * print_dlistint - prints members of double linked list
 * @h: head of linked list
 * Return: returns size of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = malloc(sizeof(dlistint_t));


	if (h == NULL)
		return (size);


	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}
