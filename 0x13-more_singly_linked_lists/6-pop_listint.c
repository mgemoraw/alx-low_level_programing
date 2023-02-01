#include "lists.h"
/**
*pop_listint - pops head
*@head: head node
*Return: returns current value
*/
int pop_listint(listint_t **head)
{
	listint_t *current
	int value;

	if (*head == NULL)
		return (0);

	current = *head;
	value = current->n;
	free(current);

	*head = (*head)->next;
	return (current);
}
