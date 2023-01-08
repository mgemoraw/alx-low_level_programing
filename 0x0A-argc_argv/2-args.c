#include <stdio.h>

/**
* main - function prints sth
* @argc: argument count
* @argv: instant array
* Return: returns 0
* Author: mgemoraw
*/
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}