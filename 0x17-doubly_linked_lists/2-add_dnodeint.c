#include "lists.h"

/**
* add_dnodeint - adds node at the begining
* @head: pointer to head of the list
* @n: data to be added
* Return: returns the head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*dlistint_t *temp, *newNode; */
	dlistint_t *newNode;
	/*temp = malloc(sizeof(dlistint_t)); */
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->next = NULL;
		(*head) = newNode;
	}
	else
	{
		newNode->next = *head;
	}
	if ((*head) != NULL)
		(*head)->prev = newNode;

	/* return (newNode); */
	return (newNode);
}
