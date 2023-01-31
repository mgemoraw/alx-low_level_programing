#include "lists.h"

/**
* sum_listint - sums data in linked list
* @head: head node
* Return: eturns sum of the linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head->n != 0)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
