#include "lists.h"
/**
* get_dnodeint_at_index - gets the node of a list
* @head: head of the list
* @index: index of the list
* Return: returns the node @ index i
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
		if (i == index)
		{
			return (temp);
		}
	}

	return (NULL);
}
