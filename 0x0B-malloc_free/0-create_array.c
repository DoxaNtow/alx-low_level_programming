#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: - input of size of array in integer
 * @c: store array of strings to char
 * Return: pointer to char c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}
	return (ptr);
}
