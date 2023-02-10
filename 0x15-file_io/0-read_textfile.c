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
    ssize_t file, chars_in, chars_out;
    char *buffer;

    buffer = malloc(sizeof(char) * letters);

    if (buffer == NULL || filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);

    if (file == -1)
        return (0);

    chars_in = read(file, buffer, letters);
    if (chars_in == -1)
        return (0);

    chars_out = write(STDOUT_FILENO, buffer, chars_in);

    if (chars_out == -1)
        return (0);
    
    close(file);
    free(buffer);
    return (chars_out);
    
}
