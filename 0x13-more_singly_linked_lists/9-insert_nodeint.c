#include "lists.h"
/**
* insert_nodeint_at_index - inserts node at index
* @head: head of linked list
* @idx: index of required node
* @n: value
* Return: returns node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tempNode;
	listint_t *newNode = malloc(sizeof(listint_t));


	tempNode = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < idx && tempNode)
	{
		if (i == idx - 1)
		{
			newNode->next = tempNode->next;
			tempNode->next = newNode;
			return (newNode);
		}
		else
			tempNode = tempNode->next;
		i++;
	}
	return (NULL);
}
