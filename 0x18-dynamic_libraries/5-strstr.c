#include "main.h"
/**
 * _strstr - Locate a substring
 * @haystack: String to be searched
 * @needle: substring to be located
 * Return: a pointer to the begining of a substring if a substring is located
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}

		if (*need == '\0')
			return (haystack);
	}
	return (0);
}

