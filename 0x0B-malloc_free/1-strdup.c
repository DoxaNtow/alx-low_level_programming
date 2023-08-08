#include "main.h"
#include "stdlib.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter.
 *
 * @str: inputted string
 * Return: ptr to the memory allocated
 */
char *_strdup(char *str)
{
	int x, y;
	char *ptr;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	ptr = (char *)malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		ptr[y] = str[y];

	return (ptr);
}
