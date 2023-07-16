#include <stdio.h>

/**
* main - a program to print possile combinations of two digits
*
* Return: 0 (success)
*/
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (!((i > j) || i == j || (j > k) || j == k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
