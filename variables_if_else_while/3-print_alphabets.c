#include <stdio.h>

/**
 * main - prints all letters in the alphaber order
 *  
 *  Return: returns 0
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);
	putchar ('\n');

	return (0);
}
