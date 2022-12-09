#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
* 
* Description: 
* Return: always 
*/
int main(void)
{
    srand(time(0));
   long int x = rand();
    if (x < 0)
    {
        printf("%d is negative\n", x);
    }else if(x == 0)
    {
        printf("%d is zero\n", x);
    }else{
        printf("%d is positive\n", x);
    }
    return (0);
}