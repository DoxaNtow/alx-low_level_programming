#include "main.h"
/**
 * _strcat - function that appends two strings
 * @dest: first string
 * @src: second string
 *Return: *dest
 */
char *_strcat(char *dest, char *src)
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
		dest[l + j] = src[j];
		j++;
	}

	return (dest);
}
