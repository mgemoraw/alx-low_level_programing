#include "main.h"

/**
* create_file - creates text file
* @filename: input file name
* @text_content: text content
* Return: returns integer length of string
*/
int create_file(const char *filename, char *text_content)
{
int file, i, len = 0, out;


if (filename == NULL)
return (0);

file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

if (file == -1)
return (-1);

if (!text_content)
text_content = "";


for (i = 0; text_content[i]; i++)
len++;
out = write(file, text_content, len);

if (out == -1)
return (-1);
close(file);
return (1);
}
