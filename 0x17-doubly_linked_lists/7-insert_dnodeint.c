#include "lists.h"
/**
* insert_dnodeint_at_index - insert node at index
* @h: head of the node
* @idx: index of the node
* @n: value of new node
* Return: returns the address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode, *current;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	current = (*h);
	if (idx == 0)
	{
		newNode->next = (*h);
		(*h)->prev = newNode;

		(*h) = newNode;
		return (*h);
	}
	else
	{
		while (current != NULL)
		{
			i++;
			current = current->next;

			if (i == idx - 1)
			{
				temp = current->next;
				current->next = newNode;

				newNode->next = temp;
				newNode->prev = current;

				return (newNode);
			}
		}
	}
	return (NULL);
}
