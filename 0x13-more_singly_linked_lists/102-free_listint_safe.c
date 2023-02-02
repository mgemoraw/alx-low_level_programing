#include "lists.h"

/**
 * free_listint_safe - frees memory of a linked list
 * @h: linked head pointer
 * Return: node
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *currentNode;
	size_t size = 0;

	while (*head != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		size++;
		*head = currentNode;
	}
	*head = NULL;
	return (sizeof(listint_t) * size);
}
