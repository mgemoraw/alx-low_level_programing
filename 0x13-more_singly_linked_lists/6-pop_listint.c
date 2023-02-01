#include "lists.h"
/**
*pop_listint - pops head
*@head: head node
*Return: returns current value
*/
int pop_listint(listint_t **head)
{
	listint_t *currentNode;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	value = (*head)->n;
	currentNode = (*head)->next;
	free(*head);
	*head = currentNode;

	return (value);
}
