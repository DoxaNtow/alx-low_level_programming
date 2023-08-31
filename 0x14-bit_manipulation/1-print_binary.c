#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;  /* Initialize mask to the leftmost bit */
	int i = 63;
	int significantBitFound = 0;

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	while (i >= 0)
	{
	if ((n >> i) & 1)
	{
		_putchar('1');
		significantBitFound = 1;
	}
	else if (significantBitFound)
	{
		_putchar('0');
	}

	mask >>= 1;
	i--;
	}
}

