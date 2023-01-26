#include "lists.h"
#include <stdio.h>


/**
* list_len - prints number of elements in the list
* @h: pointer to structure
* Return: returns length
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
while (h != NULL)

{
if (h->str == NULL)
{
h = h->next;
len++;
}
else
{
h = h->next;
len++;
}

}
return (len);
}
