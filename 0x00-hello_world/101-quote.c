#include <stdio.h>
#include <unistd.h>

/**
* main - Entering
*
* Description: prints "and that piece of art is userful\" - Dora Korpar, 2 015-10-19\n"
*/
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
