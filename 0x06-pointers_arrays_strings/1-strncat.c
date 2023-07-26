#include "main.h"
/**
 * _strncat - function that appends two strings
 * @dest: first string
 * @src: second string
 * @n: num of bytes from src
 *Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int j;

	l = 0;
	j = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[l + j] = src[j];
		}
		j++;
	}

	return (dest);
}
