#include "main.h"
/**
 * print_diagonal - function
 * @n: integer
 */
void print_diagonal(int n)
{
	int y;

	int x = 0;

	while (n > 0)
		{
			y = x;
				while (y > 0)
				{
					_putchar(' ');
					y--;
				}
		_putchar('\\');
		_putchar('\n');
		x++;
		n--;
		}
	if (x < 1)
		_putchar('\n');
}
