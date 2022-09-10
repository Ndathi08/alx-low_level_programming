#include <stdio.h>
/**
 * main - Enry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar((i % 10) + '0');
	}

	putchar('\n');

	return (0);
}
