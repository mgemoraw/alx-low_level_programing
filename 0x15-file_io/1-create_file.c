#include "main.h"

/**
*
*
*
*/
int create_file(const char *filename, char *text_content)
{
int file, len = 0, out;
char *buffer;

if (filename == NULL)
return (0)

if (text_content != NULL)
{
for(len = 0; text_content[len]; len++)
{
len++;
}
}
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600)
out = write(file, text_content, len);

if (fil == -1 || out == -1)
return (-1);
close(file);
return (1);
}