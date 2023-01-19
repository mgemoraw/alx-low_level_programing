#include "3-calc.h"

/**
* main - main function
* @argc: argument count
* @argv: argument vector
* Return: returns 0
*/
int main(int argc, char *argv[])
{
int n, m;
char *op;

(void)argc;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n = atoi(argv[1]);
op = argv[2];
m = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && m == 0) || (*op == '%' && m == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(n, m));
return (0);
}
