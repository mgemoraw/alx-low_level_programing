#include "lists.h"
#include <stdio.h>


/**
* print_list - prints all elements of list_t linked list
* @h: pointer to structure
* Return: returns size_t
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)

{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
h = h->next;
i++;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}

}
return (i);
}
