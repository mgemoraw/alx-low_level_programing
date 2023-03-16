#include "lists.h"
/**
* dlistint_len - function returns size of list
* @h: head of the list
* Return: returns length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp  = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (len);

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
