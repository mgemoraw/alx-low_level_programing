#include "lists.h"

/**
* add_dnodeint_end - adds node at the end of the list
* @head: head of the list
* @n: length of list
* Return: returns node of the list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode;

	temp = *head;
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		(*head) = newNode;
    }
	else 
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
	

	return (*newNode);
}
