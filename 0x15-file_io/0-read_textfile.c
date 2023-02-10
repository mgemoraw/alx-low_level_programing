#include "main.h"

/**
* _putchar - puts character to the screen
* @c: input character
* Return: returns chacter
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
/**
*read_textfile - read text files
*@filename: file name to be read
*@letters: size of chars in filename
*Return: retruns ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *f_out;
    char ch;
    ssize_t chars = 0;

    f_out = fopen(filename, "r");

    if (f_out == NULL || filename == NULL)
        return (0);

    while((ch = fgetc(f_out)) != EOF)
    {
        if (ch =='\n')
        {
            _putchar('\n');
        }
        else
        {
            _putchar(ch);
        }
        chars++; 
    }

    return (chars + 1);
}
