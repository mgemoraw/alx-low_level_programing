#include "lists.h"
/**
*listint_len - function returns length of linked list
*@h: structure
*Return: returns length
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			h = h->next;
			len++;
		}
	}
	return (len);

}
