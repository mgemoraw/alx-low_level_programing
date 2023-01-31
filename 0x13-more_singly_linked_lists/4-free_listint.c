#include "lists.h"

/**
*free_listint - removes allocated memory to listint_t
*@head: input structure node
*Return: returns nothing
*/
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = *head;
		head = head->next;
		free(currentNode->n);
		free(currentNode);
	}
}
