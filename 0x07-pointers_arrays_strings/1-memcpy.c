#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@n: number of bytes to be copied
 *@src: bytes from memory area
 *@dest: destination to memory area
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
