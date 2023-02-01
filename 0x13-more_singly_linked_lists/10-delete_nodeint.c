#include "lists.h"
/**
*delete_nodeint_at_index - deletes node at index i
*@head: head node
*@index: reference index
*Return: returns index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode = *head;
	listint_t *currNode = NULL;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (i < index - 1)
	{
		if (tempNode == NULL || tempNode->next == NULL)
		{
			return (-1);
		}
		tempNode = tempNode->next;
		i++;
	}
	currNode = tempNode->next;
	tempNode->next = currNode->next;
	free(currNode);

	return (1);
}
