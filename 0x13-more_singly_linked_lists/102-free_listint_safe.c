#include "lists.h"

/**
 * free_listint_safe - frees memory of a linked list
 * @h: linked head pointer
 * Return: size freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *currentNode;
	size_t size = 0;

	while (*h != NULL)
	{
		currentNode = (*h)->next;
		free(*h);
		size++;
		*h = currentNode;
	}
	*h = NULL;
	return (size);
}
