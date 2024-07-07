#include "main.h"
/**
 * root - function
 * @n: variable
 * @num: variable
 * Return: root
 */
int root(int n, int num)
{
	if (num * num == n)
		return (num);
	return (num * num <= n ? root(n, num + 1) : -1);
}
/**
 * _sqrt_recursion - function
 * @n: variable
 * Return: root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (root(n, 2));
}
