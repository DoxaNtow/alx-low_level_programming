#include <stdio.h>
/**
 * main - A program that prints the last digit
 *Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);
}

