#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: binary number to be converted
 *
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalValue = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
	if (b[index] < '0' || b[index] > '1')
		return (0);

	decimalValue = (decimalValue << 1) | (b[index] - '0');
	index++;
	}

	return (decimalValue);
}

