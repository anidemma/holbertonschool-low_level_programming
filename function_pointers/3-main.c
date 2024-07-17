#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || (get_op_func(argv[2]) == NULL))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]), b = atoi(argv[3]), o = get_op_func(argv[2]);

	if (*o == '/' || *o == '%')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", o(a, b));

	return (0);
}
