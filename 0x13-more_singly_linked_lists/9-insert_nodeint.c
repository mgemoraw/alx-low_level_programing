#include "lists.h"
/**
* insert_nodeint_at_index - inserts node at index
* @head: head of linked list
* @idx: index of required node
* @n: value
* Return: returns node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	while (head != NULL)
	{
		head = head->next;
		if (head->n != 0 && i == idx)
		{
			newNode->next = head->next;
			newNode->n = n;
			head->next = newNode;
		}
		i++;
	}
	return (newNode);
}
