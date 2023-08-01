#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: searched string
 * @accept: set of string to be searcherd for
 * Return: if a set is matched - a pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s != '\0')
	{
		for (counter = 0; accept[counter]; counter++)
		{
		if (*s == accept[counter])
		return (s);
		}
	s++;
	}
	return ('\0');
}

