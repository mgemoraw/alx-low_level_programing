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
    int f_out;
    char ch;
    size_t chars = 0;
    int bytes = 0;
    f_out = open(filename, O_RDONLY);

    (void)letters;

    if (f_out == 0 || filename == NULL)
        return (0);
    
    while((bytes = read(f_out, &ch, sizeof(ch))) > 0)
    {
        if (ch == EOF || chars == letters)
            return (chars);
    
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
    close(f_out);

    return (chars + 1);
}
