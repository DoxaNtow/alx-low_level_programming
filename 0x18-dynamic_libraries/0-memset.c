#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: area of memory to be filled
 *@b: constant byte to copy(char)
 *@n: no. of times to copy b
 *Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
