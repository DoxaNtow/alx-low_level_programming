#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of times to print n
 * Return: 0
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
