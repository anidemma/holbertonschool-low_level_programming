#include "main.h"
/**
 * clear_bit - function
 * @n: variable
 * @index: index
 * Return: -1 , 1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= (unsigned long)(~(1 << index));
	return (1);
}
