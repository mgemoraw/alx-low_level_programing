#include "lists.h"

/**
* _strlen - prints length of string
* @str: input string
* Return: returns length of string
*/
int _strlen(const char *str)
{
unsigned int len = 0;
while (*str++ != '\0')
{
len++;
}

return (len);
}
/**
*add_node_end - adds node to the end
* @head: head of linked list
* @str: passed string
* Return: returns newNode
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tempNode;
list_t *newNode = malloc(sizeof(list_t));

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = _strlen(str);

newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
tempNode = *head;

while (tempNode->next)
tempNode = tempNode->next;

tempNode->next = newNode;
}
return (newNode);
}
