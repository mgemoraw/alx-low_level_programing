#include "lists.h"

/**
* free_list - frees allocated space
* @head: input node
* Return: returns nothing
*/
void free_list(list_t *head)
{
list_t *currentNode;
while (head != NULL)
{
currentNode = head;
head = head->next;
free(currentNode);
}

}
