#include "lists.h"
/**
* free_dlistint - frees the linked list
* @head: head of the list
* Return: returns nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	
	while(head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
