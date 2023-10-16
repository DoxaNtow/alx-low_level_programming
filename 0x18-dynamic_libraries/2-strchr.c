#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}

