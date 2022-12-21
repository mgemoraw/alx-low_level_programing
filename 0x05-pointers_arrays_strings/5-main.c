#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* main -check the code
*
* Return: Always 0
*/

int main(void)
{
    char *str;
    
    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    rev_string(str);

    return (0);
}