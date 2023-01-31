#include "lists.h"
/**
* add_nodeint_end - adds node at the end of the list
* @head: head of node
* @n: value to add
* Return: retruns nothing
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempNode;
	listint_t *newNode = malllc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n

	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		tempNode = *head;

	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
	}
	return (newNode);
}
