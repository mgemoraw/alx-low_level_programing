
#include "lists.h"
/**
* sum_dlistint - gets the sum of a list
* @head: head of the list
* Return: returns the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum + head->n;
		head = head->next;
	}

	return (sum);
}
