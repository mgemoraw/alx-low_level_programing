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
		(*head)->prev = newNode;
		newNode->next = (*head);
		(*head) = newNode;
	}
	
	/* return (newNode); */
	return (*head);
}

/**
 * _print_dlistint_backward - prints linked list in the backward direction
 * @head: head of the double linked list 
 * @Return: retusns size of the list
 */
size_t _print_dlistint_backward(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t counter = 0;
	while (temp != NULL)
	{
		temp = temp->next;
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
		counter++;
	}

	return (counter);
}
