#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
		putchar(abc);
	putchar('\n');
	return (0);
}
