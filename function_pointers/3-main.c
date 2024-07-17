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
		printf("196\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("196\n");
		exit(99);
	}
	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("98\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d", o(a, b));

	return (0);
}
