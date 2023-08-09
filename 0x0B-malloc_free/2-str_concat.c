#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - joins twt strins
 * @s1: first string
 * @s2: second string
 * Return: ptr to two strings whose memory was allocated for.
 */
char *str_concat(char *s1, char *s2)
{
	int i, str1, len2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str1 = strlen(s1);
	len2 = strlen(s2);

	new_str = malloc(str1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);



	for (i = 0; i < str1; i++)
	{
		new_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		new_str[str1 + i] = s2[i];
	}

	new_str[str1 + len2] = '\0';

	return (new_str);
}


