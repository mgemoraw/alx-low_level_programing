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
	dlistint_t *temp, *newNode, *tempPrev;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	temp = (*h);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;

		if (i == idx)
		{
			tempPrev = temp->prev;
			newNode->next = temp;
			newNode->prev = tempPrev;
			return (newNode);
		}

	}
	return (NULL);
}
