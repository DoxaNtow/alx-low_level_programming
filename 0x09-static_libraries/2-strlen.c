#include "main.h"
/**
 * _strlen - function that counts the string length
 * @s: - passed string pointer to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	 int string_length;

	string_length = 0;
	while (s[string_length] != '\0')
	{
		string_length++;
	}
	return (string_length);
}

