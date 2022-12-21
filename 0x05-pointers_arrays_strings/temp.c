#include<stdio.h>

#include<string.h>


int main(void)
{
    int y = 98;
    int *p1 = &y;
    char *s;
    int a[10] = {1, 3, 5, 2};


    printf("%d\n", *p1);
    printf("%p\n", &y);
    printf("%p\n", p1);
    printf("%d\n", y);

    // 00001111;

    return 0;
}