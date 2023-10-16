#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: num of bytes from src
 *Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	 j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
