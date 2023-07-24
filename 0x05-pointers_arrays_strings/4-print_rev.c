#include "main.h"

/**
 * print_rev - string to be reversed
 *
 * @s: string to be printed on stdout
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a--; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}
