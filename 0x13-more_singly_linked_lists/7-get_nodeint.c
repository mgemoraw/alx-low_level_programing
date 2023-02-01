#include "lists.h"
/**
*get_nodeint_at_index - gets the index of a node
*@head: node
*@index: index of node
*Return: returns index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *cNode = head;

while (cNode && i < index)
{
cNode = cNode->next;
i++;
}

return (cNode ? cNode : NULL);

}
