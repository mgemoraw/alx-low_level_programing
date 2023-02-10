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
    ssize_t f_out, chars, buffer;
    char *str;

    str = malloc(sizeof(char) * letters);

    if (str == NULL || filename == NULL)
        return (0);

    f_out = open(filename, O_RDONLY);

    if (f_out == -1)
        return (0);

    chars = read(f_out, str, letters);
    if (chars == -1)
        return (0);

    buffer = write(STDOUT_FILENO, str, chars);

    if (buffer == -1)
        return (0);
    
    close(f_out);
    free(str);
    return (buffer);
    
}
