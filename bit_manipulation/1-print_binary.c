#include "main.h"
/**
 * print_num - function
 * @n: variable
 */
void print_num(unsigned long int n)
{
	if (!n)
		return;
	print_num(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - function
 * @n: variable
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	print_num(n);
}
