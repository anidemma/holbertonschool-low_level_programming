#include "main.h"
/**
* print_most_numbers -do not print the numbers from 2 to 4
*/

void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
