#include "main.h"
/**
 * _isdigit - function to checks for a digit
 * @c: The character to be checked
 * Return: 1 for digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
	{
	return (1);
	}
	return (0);
}
