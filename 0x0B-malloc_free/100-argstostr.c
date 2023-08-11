#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: No. of arguments passed
 * @av:  array of string argument
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL if ac is 0 or av is NULL, or if memory allocation
 */


char *argstostr(int ac, char **av)
{
	int i, j, str_len, position;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	str_len = 0;


	for (i = 0; i < ac; i++)
	{
	str_len += strlen(av[i]) + 1;
	}

	concat_str = (char *)malloc((str_len + 1) * sizeof(char));

	if (concat_str == NULL)
	return (NULL);

	position = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat_str[position++] = av[i][j];
		}
		concat_str[position++] = '\n';
	}

	concat_str[position] = '\0';

	return (concat_str);
}
