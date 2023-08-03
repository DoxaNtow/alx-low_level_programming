#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be counted.
 *
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}

	return (counter);
}

