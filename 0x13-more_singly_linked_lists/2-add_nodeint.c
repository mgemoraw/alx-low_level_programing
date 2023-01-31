#include "lists.h"

/**
* add_nodeint - adds node to the head
* @head: head of the node
* @n: input number
* Return: returns number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
