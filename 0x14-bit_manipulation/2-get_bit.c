#include "main.h"

/**
 * get_bit - value of a bit at an index in a decimal number.
 * @n: Number to find.
 * @index: Index of the bit.
 *
 * Return: Value of the bit, or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	return (-1);

	return ((n >> index) & 1);
}

