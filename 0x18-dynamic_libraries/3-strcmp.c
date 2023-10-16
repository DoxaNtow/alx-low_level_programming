#include "main.h"
/**
 * _strcmp - compare two strings
 *@s1: 1st string
 *@s2: 2nd string
 *Return:positive value if s1 is greater than s2 and negative if s2
 *in greater than s1 and 0 if they are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
