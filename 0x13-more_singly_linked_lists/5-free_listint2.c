#include "lists.h"
/**
* free_listint2 - free alocated memory struct
* @head: structure node
* Return: returns nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			currentNode = *head;
			free(currentNode);
			*head = (*head)->next;
		}
		*head = NULL;
	}
}
