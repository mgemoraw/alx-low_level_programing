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
*add_node - adds node to the head
* @head: head of linked list
* @str: passed string
* Return: returns newNode
*/
list_t *add_node(list_t **head, const char *str)
{

list_t *newNode = malloc(sizeof(list_t));

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = _strlen(str);

newNode->next = *head;

*head = newNode;

return (newNode);
}
